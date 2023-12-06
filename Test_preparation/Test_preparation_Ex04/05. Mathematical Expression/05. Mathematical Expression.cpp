#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int opB = 0;
    int clB = 0;

    bool corr = true;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '(') {
            opB++;
        }
        else if (input[i] == ')') {
            clB++;
        }
        if (clB > opB) {
            corr = false;
            break;
        }
    }

    cout << ((corr && opB == clB) ? "correct" : "incorrect") << endl;

    return 0;


}
