// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "random.h"

int main()
{
    int nHeads = 0;
    int nFlips = 0;

    Randomize();

    std::cout << "---Start Flipping!---\n";

    while (nHeads < 3) {

        int boolVal = RandomInteger(0, 1);

        if (boolVal == 0) {
            std::cout << "Heads" << std::endl;
            nHeads++;
        }
        else {
            std::cout << "Tails" << std::endl;
            nHeads = 0;
        }

        nFlips++;
    }

    std::cout << "\nIt took " << nFlips << " flips to get 3 consecutive heads." << std::endl;


    system("pause");
}
