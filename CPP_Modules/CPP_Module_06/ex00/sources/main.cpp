#include "../includes/ScalarConversion.h"

int main(){
    ScalarConversion *S = new ScalarConversion("nan");
    S->convert();

    std::cout << *S;
    /*try {
        throw ScalarConversion::NonDisplayableChar();
    }
    catch (std::exception & e){
        std::cout << e.what();
    }*/
    return 0;
}