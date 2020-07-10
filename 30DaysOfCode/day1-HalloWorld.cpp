#include <iostream>
#include <string>

int main() {
    std::string input_string;

    getline(std::cin, input_string);

    std::cout << "Hello, World." << std::endl;
    std::cout << input_string << std::endl;

    return 0;
}