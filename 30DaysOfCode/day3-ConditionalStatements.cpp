#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    if(N % 2 != 0)
        std::cout << "Weird" << std::endl;
    else if(N <= 5)
        std::cout << "Not Weird" << std::endl;
    else if(N <= 20)
        std::cout << "Weird" << std::endl;
    else
        std::cout << "Not Weird" << std::endl;

    return 0;
}