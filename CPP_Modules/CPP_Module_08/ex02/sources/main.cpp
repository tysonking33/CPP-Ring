#include "../includes/MutantStack.h"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "stack top: "<< mstack.top() << std::endl;
    mstack.pop();
    std::cout << "stack top: "<< mstack.top() << std::endl;

    std::cout << "stack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    std::cout << "stack size: " << mstack.size() << std::endl;

    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    std::cout << "iterator " << *it << std::endl;
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    return 0;
}