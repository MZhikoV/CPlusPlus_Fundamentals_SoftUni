#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    stringstream inp(input);

    string str;
    int a;
    int sum = 0;
    stringstream outp;

    while (inp>>str) {

        stringstream word(str);

        int isnum;

        word >> isnum;


        if (word) {
                sum += isnum;
        }
        else {
            outp << str<<' ';
        }

    }

    cout << sum << endl;
    cout << outp.str() << endl;

    return 0;
}