#include <iostream>
#include <string>
#include <iomanip>

int main() {
    int i = 4;
    double d = 4.0;
    std::string s = "HackerRank ";

    int j;
    double e;
    std::string t;
    
    std::cin>>j;
    std::cin>>e;
    std::cin.ignore(10,'\n');
    getline(std::cin,t);
    
    std::cout<<i + j<<std::endl;
    std::cout<< std::fixed << std::setprecision(1) << d + e << std::endl;
    std::cout<< s + t << std::endl;

    return 0;
}