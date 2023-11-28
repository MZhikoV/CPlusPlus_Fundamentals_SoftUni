#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    ostringstream newSt;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == input[i + 1]) {
            continue;
        }
        else {
            newSt << input[i];
        }
    }
    cout << newSt.str() << endl;

    return 0;
}