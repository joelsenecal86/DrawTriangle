#include <iostream>

int main()
{
    int input;

    do
    {

        std::cout << "Input Number: ";
        std::cin >> input;

        if (std::cin)
        {
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
        
        if (!std::cin)
        {
            std::cout << "Invalid Input!" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
        else
        {
            break;
        }
    } while (std::cin.fail() == false);
}
