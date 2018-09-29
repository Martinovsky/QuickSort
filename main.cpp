#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "sort/quickSort.hpp"

int main()
{
    // INIT vector with random values
    std::vector<int> randomVector(7);
    auto limitRand = [](int &number) { number = number % 100; };
    std::generate(randomVector.begin(), randomVector.end(), rand);
    std::for_each(randomVector.begin(), randomVector.end(), limitRand);
    std::vector<int> test = randomVector;

    for (int value : randomVector)
    {
        std::cout << value << std::endl;
    }
    std::cout << "--------------" << std::endl;
    quickSort(randomVector);
    for (int value : randomVector)
    {
        std::cout << value << std::endl;
    }
    std::cout << "--------------" << std::endl;
    test[0] *= -1;
    test[2] *= -1;
    test[4] *= -1;
    for (int value : test)
    {
        std::cout << value << std::endl;
    }
    std::cout << "--------------" << std::endl;
    quickSort(test);
    for (int value : test)
    {
        std::cout << value << std::endl;
    }
    //std::reverse(randomVector.begin(), randomVector.end());
    return 0;
}
