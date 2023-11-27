#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    ostringstream resultSt;
    ostringstream alphaSt;
    ostringstream digitSt;
    ostringstream symbSt;

    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {
            alphaSt << input[i];
        }
        else if (isdigit(input[i])) {
            digitSt << input[i];
        }
        else {
            symbSt << input[i];
        }
    }
    resultSt <<  digitSt.str() << endl << alphaSt.str() << endl << symbSt.str();

    cout << resultSt.str() << endl;

    return 0;
}