#include <iostream>
#include "../includes/Array.h"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    {
        std::cout << "Creating array of size 5..." << std::endl;
        Array<int> arr(5);
        Array<int> arr_copy(3);
        arr_copy = arr;

        std::cout << "arr: ";
        for (int i = 0; i < 5; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n\n"<< std::endl;
        std::cout << "arr_copy: ";
        for (int i = 0; i < 5; i++) {
            std::cout << arr_copy[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Changing one element in arr..." << std::endl;
        arr[1] = 1;
        std::cout << "arr: ";
        for (int i = 0; i < 5; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "arr_copy: ";
        for (int i = 0; i < 5; i++) {
            std::cout << arr_copy[i] << " ";
        }
        std::cout << std::endl << std::endl;

        std::cout << "Trying out of range index..." << std::endl;
        try {
            std::cout << arr[1000];
        } catch (std::exception& e) {
            std::cout << "Too large index" << std::endl;
        }

        std::cout << std::endl << "Trying to read value with []..." << std::endl;
        try {
            const Array<int> a(5);
            std::cout << "Can read: " << a[0] << std::endl;
            // a[1] = 2;  compile time error
        } catch (std::exception& e) {
            std::cout << "Can't write" << std::endl;
        }

        std::cout << std::endl << "Creating empty arrays" << std::endl;
        try {
            Array<int> empty_arr(0);
            Array<int> empty_arr2;
            std::cout << "Successfully created empty Arrays" << std::endl;
        } catch (std::exception& e) {
            std::cout << "Couldn't create Empty Arrays" << std::endl;
        }
    }


    return 0;
}