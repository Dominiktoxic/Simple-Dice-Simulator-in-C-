#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int rolls;
    int total = 0;
    int numOfSides;

    std::cout << "**************** DICE ROLLING SIMULATOR **************** \n";

    std::cout << "How many sides on the dice: ";
    std::cin >> numOfSides;

    std::cout << "How many rolls: ";
    std::cin >> rolls;

    for (int i = 0; i < rolls; i++) {
        int roll = rand() % numOfSides + 1;
        std::cout << "Roll " << i + 1 << ": " << roll << std::endl;
        total += roll;
    }

    std::cout << "Total: " << total << "\n";
    std::cout << "Average: " << total / (double)rolls << "\n";

    std::cout << "********************************************************";

    return 0;
}