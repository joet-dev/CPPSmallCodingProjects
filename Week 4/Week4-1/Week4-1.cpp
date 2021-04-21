// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "random.h"

int main()
{
    int nTrials;
    double totalNum = 0;

    Randomize();

    std::cout << "This program averages a series of random numbers between 0 and 1.\n";
    std::cout << "How many trials? ";
    std::cin >> nTrials;

    for (int i = 0; i < nTrials; i++) {
        totalNum += RandomReal(0.0, 1.0);
    }

    std::cout << "The average value after " << nTrials << " trials is " << totalNum / nTrials << std::endl;
    system("pause");
}
