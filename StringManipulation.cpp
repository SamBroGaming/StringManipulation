#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    std::string inputted;
    std::cout << "Enter text: ";
    std::getline(std::cin, inputted);
    char upperletters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char lowerletters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    srand((unsigned) time(0));
    int len_output1 = inputted.length();
    int rand1 = rand() % len_output1;
    for (int i = 0; i <= rand1; i++) {
        int rand2 = rand() % len_output1;

        if (inputted[rand2] == ' ') {
            continue;
        }

        else {
            int rand3 = rand() % 26;

            if (inputted[rand2] in upperletters[rand3]) {
            inputted[rand2] = upperletters[rand3];
            }

            else {
                inputted[rand2] = lowerletters[rand3];
            }
        }
    }
    std::cout << "Changed text is now: " << inputted;
    return 0;
}
