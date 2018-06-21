#include <iostream>
#define UINT32_MAX (0xffffffff)

void generateBeltOfLegend(int beltWidth, char beltOuter, char beltInner);

int main(int argc, char* argv[])
{
    char letterInner;
    char letterOuter;
    unsigned int numInput = 0;

    while(true)
    {
        system("clear");
        std::cout << "###############################" << std::endl;
        std::cout << "Welcome to Belt of Legends!" << std::endl;
        std::cout << "###############################" << std::endl;
        std::cout << std::endl;

        std::cout << "Please enter a number (1 to 10)" << std::endl;
        std::cin >> numInput;

        if (numInput == UINT32_MAX || numInput > 10)
        {
            std::cout << "Invalid Number!" << std::endl;
            return 0;
        }

        std::cout << "Please enter first letter" << std::endl;
        std::cin >> letterOuter;

        std::cout << "Please enter second letter" << std::endl;
        std::cin >> letterInner;

        std::cout << std::endl;
        std::cout << std::endl;

        // Generate belt of legend
        generateBeltOfLegend(numInput, letterOuter, letterInner);

        char willContinueKey = ' ';

        do
        {
            std::cout << std::endl;
            std::cout << "Do you want to try again? (y/n)" << std::endl;
            std::cin >> willContinueKey;
        } 
        while (willContinueKey != 'y' && willContinueKey != 'n');

        if (willContinueKey == 'n')
        {
            break;
        }
    }

    return 0;
}

void generateBeltOfLegend(int size, char beltOuter, char beltInner)
{
    int beltWidth = size * size;
    int beltHeight = size + 2;

    int maxSpacesCount = size - 2;
    int maxBeltCount = size + 2;

    for (int y = 0; y < beltHeight; y++)
    {
        int spacesCount = 0;
        int beltCount = 0;

        for (int x = 0; x < beltWidth; x++)
        {
            // Top and bottom are printed out as outer character
            if (y == 0 || y == beltHeight - 1)
            {
                std::cout << beltOuter;
            }
            else
            {
                // Left and right ends are printed out as inner character
                if (x == 0 || x == beltWidth - 1)
                {
                    std::cout << beltInner;
                    continue;
                }

                // Reset the counters when we reach the end of the count
                if (spacesCount >= maxSpacesCount && beltCount >= maxBeltCount)
                {
                    spacesCount = 0;
                    beltCount = 0;
                }

                // Print spaces
                if (spacesCount < maxSpacesCount)
                {
                    std::cout << " ";
                    spacesCount++;
                }
                else
                {
                    // Print inner character
                    if (beltCount < maxBeltCount)
                    {
                        std::cout << beltInner;
                        beltCount++;
                    }
                }
            }
        }

        std::cout << std::endl;
    }
}