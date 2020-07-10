#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n;
    int itens;
    std::cin >> n;
    std::vector<int> reverseArray;

    for (int i = 0; i < n; i++) {
        std::cin >> itens;
        reverseArray.push_back(itens);
    }

    std::reverse(reverseArray.begin(),reverseArray.end());
    std::vector<int>::iterator it;

    for (it = reverseArray.begin(); it != reverseArray.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}