#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    bool alpha = true;

    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {
            if (alpha && islower(input[i])) {
                input[i] = toupper(input[i]);
            }
            alpha = false;
        }
        else {
            alpha = true;
        }
    }
    cout << input << endl;
    return 0;
}