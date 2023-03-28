#include "../includes/Span.h"

int main()
{
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        Span spum = Span(3);
        spum.addNumber(6);
        spum.addNumber(6);
        spum.addNumber(6);
        spum.addNumber(6);
        std::cout << spum.shortestSpan() << std::endl;
        std::cout << spum.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        Span ssss = Span(20);
        std::cout << ssss.shortestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        Span sssss = Span(20);
        std::cout << sssss.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
		std::cout << "============ Iterator test ============ " << std::endl;

		Span sp(100);

		std::vector<int> vec;
		for (int i = 0; i < 100; i++)
		{
			vec.push_back(i + 1);
		}
		sp.addNumber(vec.begin(), vec.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }


    return 0;
}