#ifndef SCALARCONVERSION_H
#define SCALARCONVERSION_H

#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <cfloat>
#include <cstddef>

using namespace std;

class ScalarConversion{
    private:
        std::string string_representation;
        int int_literal;
        char char_literal;
        float float_literal;
        double double_literal;
        std::string float_string_w_float;


    public:
        int intToggle;
        int charToggle;
        int floatToggle;
        int doubleToggle;

        std::string intException;
        std::string charException;
        std::string floatException;
        std::string doubleException;

        ScalarConversion();
        ScalarConversion(std::string newStringRepresentation);
        ScalarConversion(const ScalarConversion& SC1);
        void convert();
        void printAll();
        bool is_integer();
        bool is_float();
        bool is_char();
        bool is_double();

        void convertCharToInt();
        void convertFloatToString();

        void testInvalidConversion();

        int getInt();
        char getChar();
        float getFloat();
        double getDouble();

        int string_type;

        ScalarConversion &operator=(const ScalarConversion &src);

        class NonDisplayableChar : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class ImpossibleConversion : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class nan : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class nanf : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class negative_inff : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class positive_inff : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class negative_inf : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class positive_inf : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, ScalarConversion& ref);


#endif