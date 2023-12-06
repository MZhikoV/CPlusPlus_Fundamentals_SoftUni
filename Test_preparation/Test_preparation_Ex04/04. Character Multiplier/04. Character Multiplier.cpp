#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string inp;
    getline(cin, inp);

    stringstream input(inp);

    string str1, str2;

    input >> str1;
    input >> str2;

    int len1 = str1.length();
    int len2 = str2.length();

    int min = len1;
    if (min > len2) {
        min = len2;
    }

    int sum=0;

    for (int i = 0; i < min; i++) {
        sum+=(str1[i] * str2[i]);
    }

    if (len1 != len2) {
        if (min == len1) {
            for (int j = min; j < len2; j++) {
                sum+= str2[j];
            }
        }
        else {
            for (int j = min; j < len1; j++) {
                sum += str1[j];
            }
        }
    }

    cout << sum << endl;

    return 0;
}
