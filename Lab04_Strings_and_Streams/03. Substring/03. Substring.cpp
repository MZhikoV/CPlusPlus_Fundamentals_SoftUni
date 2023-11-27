#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int foundIndx=str2.find(str1);

    while (foundIndx != string::npos) {
        str2.erase(foundIndx, str1.length());
        foundIndx = str2.find(str1);
    }

    cout << str2 << endl;

    return 0;
}