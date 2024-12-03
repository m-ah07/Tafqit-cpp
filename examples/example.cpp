#include <iostream>
#include "tafqit.h"

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Number in words (English): " << numberToWords(number, "en") << std::endl;

    return 0;
}
