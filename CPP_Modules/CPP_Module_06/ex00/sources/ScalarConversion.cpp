#include "../includes/ScalarConversion.h"

ScalarConversion::ScalarConversion(){
    string_representation = "0";
    float_string_w_float = "0";
    std::cout << string_representation << std::endl;
    string_type = 0;
    intToggle = 0;
    charToggle = 0;
    floatToggle = 0;
    doubleToggle = 0;
    std::cout << "Default ScalarConversion constructor called\n";
}

ScalarConversion::ScalarConversion(std::string newStringRepresentation){
    string_representation = newStringRepresentation;
    float_string_w_float = newStringRepresentation;
    std::cout << newStringRepresentation << std::endl;
    string_type = 0;
    intToggle = 0;
    charToggle = 0;
    floatToggle = 0;
    doubleToggle = 0;
    std::cout << "ScalarConversion constructor called\n";
}

ScalarConversion::ScalarConversion(const ScalarConversion& SC1): string_representation(SC1.string_representation), float_string_w_float(SC1.float_string_w_float), string_type(SC1.string_type){
    string_type = 0;
    intToggle = 0;
    charToggle = 0;
    floatToggle = 0;
    doubleToggle = 0;
    std::cout << "Copy ScalarConversion constructor called\n";
}

void ScalarConversion::convert(){
    if (is_integer() == true){
        std::cout << "It's an integer!!!\n";
        string_type = 1;
    }
    else if (is_float() == true){
        std::cout << "It's an float!!!\n";
        string_type = 2;
    }
    else if (is_double() == true){
        std::cout << "It's an double!!!\n";
        string_type = 3;
    }
    else if (is_char() == true){
        std::cout << "It's an char!!!\n";
        string_type = 4;
    }
    else{
        std::cout << "It's a string!!!\n";
        string_type = 5;
    }
}

bool ScalarConversion::is_integer()
{
    std::string temp_string;
    bool has_only_digits;
    if ((string_representation[0] == '-')
        || (string_representation[0] == '+')){
        temp_string = string_representation.substr(1, string_representation.length());
        has_only_digits = (temp_string.find_first_not_of( "0123456789" ) == std::string::npos);
        if (string_representation.length() == 1)
            has_only_digits = false;
    }
    else
        has_only_digits = (string_representation.find_first_not_of( "0123456789" ) == std::string::npos);
    return has_only_digits;
}

bool ScalarConversion::is_float()
{
    if ((string_representation.compare("-inff") == 0)
        || (string_representation.compare("+inff") == 0)
        || (string_representation.compare("nanf") == 0))
            return true;
    if ((string_representation[0] != '+')
        && (string_representation[0] != '-')
        && (string_representation[0] < '0')
        && (string_representation[0] > '9')
        && (string_representation[0] != '.')){
            return false;
    }
    for (size_t i = 1; i < string_representation.length() - 1; i++){
        if ((string_representation[i] < '0' || string_representation[i] > '9') && string_representation[i] != '.'){
            return false;
        }
    }
    if (string_representation[string_representation.length() - 1] != 'f')
        return false;
    return true;
}

bool ScalarConversion::is_char(){
    if (string_representation.length() == 1)
            return true;
    return false;
}

bool ScalarConversion::is_double(){
    if ((string_representation.compare("-inf") == 0)
        || (string_representation.compare("+inf") == 0)
        || (string_representation.compare("nan") == 0))
        return true;
    std::istringstream iss(string_representation);
    double d;
    return iss >> std::noskipws >> d && iss.eof();
}


void ScalarConversion::convertCharToInt(){
    int new_string;
    new_string = (int)(string_representation[0]);
    std::stringstream stream;

    stream << new_string;
    stream >> string_representation;
}

void ScalarConversion::convertFloatToString(){
    string_representation = string_representation.substr(0,string_representation.length() - 1);
}


int ScalarConversion::getInt(){
    std::stringstream obj;
    obj << string_representation; // insert data into obj
    long long int tempLLI;
    obj >> tempLLI; // fetch integer type data
    try{
        if ((string_representation.length() > 10)
            || ((string_representation.length() > 11) && (string_representation[0] == '-'))){
            throw ScalarConversion::ImpossibleConversion();
        }
        else if (tempLLI > INT_MAX || tempLLI < INT_MIN){
            std::cout << "max min fail\n";
            throw ScalarConversion::ImpossibleConversion();
        }
        else
            testInvalidConversion();
    }
    catch (std::exception & e){
        intToggle = 1;
        intException = e.what();
    }
    if (intToggle == 0)
        int_literal = stoi(string_representation);
    return int_literal;
}

char ScalarConversion::getChar(){
    try{
        if (getInt() <= 32 || getInt() >= 127){
            throw ScalarConversion::NonDisplayableChar();
        }
        else
            testInvalidConversion();
    }
    catch (std::exception & e){
        charToggle = 1;
        charException = e.what();
    }
    if (charToggle == 0){
        int temp_int = stoi(string_representation);
        char_literal = (char)temp_int;
    }
    return char_literal;
}

float ScalarConversion::getFloat(){
    std::stringstream obj;
    obj << string_representation; // insert data into obj
    long double tempLLF;
    obj >> tempLLF; // fetch integer type data
    try{
        if (((tempLLF > (FLT_MAX)) || (tempLLF < -(FLT_MAX)))
            && ((string_representation.compare("-inff") != 0)
            || (string_representation.compare("+inff") != 0)
            || (string_representation.compare("nanf") != 0)
            || (string_representation.compare("-inf") != 0)
            || (string_representation.compare("+inf") != 0)
            || (string_representation.compare("nan") != 0))){
                std::cout << "1\n";
                throw ScalarConversion::ImpossibleConversion();
            }
        else if (float_string_w_float.compare("-inff") == 0)
            throw ScalarConversion::negative_inff();
        else if (float_string_w_float.compare("+inff") == 0)
            throw ScalarConversion::positive_inff();
        else if (float_string_w_float.compare("nanf") == 0)
            throw ScalarConversion::nanf();
    }
    catch (std::exception & e){
        floatToggle = 1;
        floatException = e.what();
    }
    if (floatToggle == 0)
        float_literal = stof(string_representation.c_str());
    return float_literal;
}

double ScalarConversion::getDouble(){
    std::stringstream obj;
    obj << string_representation; // insert data into obj
    long double tempLLD;
    obj >> tempLLD; // fetch integer type data
    try{
        if ((tempLLD > (DBL_MAX) || tempLLD < -DBL_MAX)
            && ((string_representation.compare("-inff") != 0)
            || (string_representation.compare("+inff") != 0)
            || (string_representation.compare("nanf") != 0)
            || (string_representation.compare("-inf") != 0)
            || (string_representation.compare("+inf") != 0)
            || (string_representation.compare("nan") != 0))){
                throw ScalarConversion::ImpossibleConversion();
            }
        else if (float_string_w_float.compare("-inf") == 0)
            throw ScalarConversion::negative_inf();
        else if (float_string_w_float.compare("+inf") == 0)
            throw ScalarConversion::positive_inf();
        else if (float_string_w_float.compare("nan") == 0)
            throw ScalarConversion::nan();
    }
    catch (std::exception & e){
        doubleToggle = 1;
        doubleException = e.what();
    }
    if (doubleToggle == 0){
        double_literal = atof(string_representation.c_str());
        return double_literal;
    }
    return (double)NULL;
}

ScalarConversion &ScalarConversion::operator=(const ScalarConversion &src)
{
    std::cout << "ScalarConversion Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

std::ostream &operator<<(std::ostream &out, ScalarConversion& ref)
{
    if (ref.string_type == 4){
        ref.convertCharToInt();
    }
    if (ref.string_type == 2){
        ref.convertFloatToString();
    }
    /*out << "char: " << ref.getChar() << std::endl;
    out << "int: " << ref.getInt() << std::endl;
    out << "float: " << ref.getFloat() << std::endl;
    out << "double: " << ref.getDouble() << std::endl;*/

    out << "char: ";
    ref.getChar();
    if (ref.charToggle == 1)
        out << ref.charException << std::endl;
    else
        out << ref.getChar() << std::endl;
    out << "int: ";
    ref.getInt();
    if (ref.intToggle == 1)
        out << ref.intException << std::endl;
    else
        out << ref.getInt() << std::endl;
    out << "float: ";
    ref.getFloat();
    if (ref.floatToggle == 1)
        out << ref.floatException << std::endl;
    else
        out << ref.getFloat() << std::endl;
    out << "double: ";
    ref.getDouble();
    if (ref.doubleToggle == 1)
        out << ref.doubleException << std::endl;
    else
        out << ref.getDouble() << std::endl;

    return (out);
}

const char *ScalarConversion::NonDisplayableChar::what() const throw(){
    return ("Non displayable");
}

const char *ScalarConversion::ImpossibleConversion::what() const throw(){
    return ("Impossible");
}

const char *ScalarConversion::nan::what() const throw(){
    return ("nan");
}

const char *ScalarConversion::nanf::what() const throw(){
    return ("nanf");
}

const char *ScalarConversion::negative_inff::what() const throw(){
    return ("-inff");
}

const char *ScalarConversion::positive_inff::what() const throw(){
    return ("+inff");
}

const char *ScalarConversion::negative_inf::what() const throw(){
    return ("-inf");
}

const char *ScalarConversion::positive_inf::what() const throw(){
    return ("+inf");
}

void ScalarConversion::testInvalidConversion(){
    if (float_string_w_float.compare("-inff") == 0)
        throw ScalarConversion::ImpossibleConversion();
    else if (float_string_w_float.compare("+inff") == 0)
        throw ScalarConversion::ImpossibleConversion();
    else if (float_string_w_float.compare("nanf") == 0)
        throw ScalarConversion::ImpossibleConversion();
    else if (float_string_w_float.compare("-inf") == 0)
        throw ScalarConversion::ImpossibleConversion();
    else if (float_string_w_float.compare("+inf") == 0)
        throw ScalarConversion::ImpossibleConversion();
    else if (float_string_w_float.compare("nan") == 0)
        throw ScalarConversion::ImpossibleConversion();
}