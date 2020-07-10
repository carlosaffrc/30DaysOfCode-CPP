#include <iostream>

long factorial(int n);

int main() {
    std::cout << "\tNumber" << " \tFactorial " << std::endl;

    for(int i = 1; i <= 15; i++) {
        std::cout << "\t" << i << "\t" << factorial(i) << std::endl;
    }

    return 0;
}

long factorial(int n) {
    if(n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}