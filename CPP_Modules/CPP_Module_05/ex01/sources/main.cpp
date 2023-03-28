#include "../includes/Bureaucrat.h"
#include "../includes/Form.h"

int main(){

    Bureaucrat *B = new Bureaucrat("Bob", 144);
    Form *F = new Form("Bill 208", 145, 130);
    std::cout << F->getFormName() << std::endl;
    F->beSigned(*B);
    B->signForm(F);

    std::cout << F;

    delete F;

    return 0;
}