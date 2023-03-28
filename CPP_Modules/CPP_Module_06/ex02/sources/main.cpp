/*
Base * generate(void);
It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
to use anything you like for the random choice implementation.

void identify(Base* p);
It prints the actual type of the object pointed to by p: "A", "B" or "C".

void identify(Base& p);
It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
inside this function is forbidden.
*/

#include "../includes/A.h"
#include "../includes/B.h"
#include "../includes/C.h"

Base * generate(void){
    srand(time(0));

    int rand_num = rand() % 2;

    if (rand_num == 0)
        return (new A());
    else if (rand_num == 1)
        return (new B());
    return (new C());

}

void identify(Base* p){
    if (dynamic_cast<A *>(p))
        std::cout << "type: A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "type: B\n";
    else
        std::cout << "type: C\n";

}

void identify(Base& p){
    try{
        A &a = dynamic_cast<A &>(p);
        std::cout << "type: A\n";
        (void)a;
    }
    catch(std::exception &e){
        (void)e;
    }
    try{
        B &b = dynamic_cast<B &>(p);
        std::cout << "type: B\n";
        (void)b;
    }
    catch(std::exception &e){
        (void)e;
    }
    try{
        C &c = dynamic_cast<C &>(p);
        std::cout << "type: C\n";
        (void)c;
    }
    catch(std::exception &e){
        (void)e;
    }
}

int main(){
    Base *newBase;
    newBase = generate();
    identify(newBase);
    identify(*newBase);
    return 0;
}