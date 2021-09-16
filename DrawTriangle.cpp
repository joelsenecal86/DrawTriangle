#include <iostream>

int main()
{
    std::cout << "Input Integer: ";
    int input;

    std::cin >> input;

    for (int x = 0; x <= input; x++)
    {
        std::cout << "X";

        for (int y = 0; y < x; y++)
        {
            if (y == (x - 1) && x != input)
                std::cout << "Y";           

            if (y != x && x != input)
                std::cout << " ";           

            if (x == input)          
                std::cout << "Y";           
        }

        std::cout << "" << std::endl;        
    }
}
