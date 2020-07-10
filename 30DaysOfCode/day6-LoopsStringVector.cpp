#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {

    string str = "Hacker";
    vector<char> strVector(str.begin(), str.end());
    ostringstream strEven, strOdd;

    for(int i = 0; i < strVector.size(); i++)
    {
        if(i % 2 == 0)
            strEven << strVector.at(i);
        else
            strOdd << strVector.at(i);
    }

    cout << strEven.str() << ' ' << strOdd.str() << endl;

    return 0;
}
