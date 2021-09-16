// DrawTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Input Integer: ";
    int input;

    std::cin >> input;

    for (int i = 0; i <= input; i++)
    {
        std::cout << "X";

        for (int j = 0; j < i; j++)
        {
            if (j == (i - 1) && i != input)
                std::cout << "Y";           

            if (j != i && i != input)
                std::cout << " ";           

            if (i == input)          
                std::cout << "X";           
        }

        std::cout << "" << std::endl;        
    }
}
