#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

int main() {
    int entries;
    int value;
    std::string key;

    //map
    std::map<std::string, int> phoneBook;

    //iterator
    std::map<std::string, int>::iterator it;

    //pair for return value of map
    std::pair <std::map<std::string,int>::iterator, bool> ptr;

    std::cin >> entries;

    //To fill the phonebook
    for(int i = 0; i < entries; i++)
    {
        std::cin >> key;
        std::cin >> value;
        ptr = phoneBook.insert(std::pair<std::string,int>(key,value));
    }

    //To get unlimited queries
    while(std::cin >> key) {
        if (phoneBook.find(key) != phoneBook.end()) {
            std::cout << key << "=" << phoneBook.find(key)->second << std::endl;
        } else {
            std::cout << "Not found" << std::endl;
        }
    }

    return 0;
}
