#include <iostream>
#include<string>
#include <sstream>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    string strS, strL;

    if (str1.length() <= str2.length()) {
        strS = str1;
        strL = str2;
    }
    else {
        strS = str2;
        strL = str1;
    }
    int sum = 0;
    for (int i = 0; i < strS.length(); i++) {
        sum += (strS[i] * strL[i]);
    }
    for (int j = strS.length(); j < strL.length(); j++) {
        sum += strL[j];
    }
    cout << sum << endl;

    return 0;
}