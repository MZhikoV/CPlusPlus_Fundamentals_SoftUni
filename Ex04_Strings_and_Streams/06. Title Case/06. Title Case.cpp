#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    ostringstream resS;

    bool word = true;
    char c;

    for (int i = 0; i < input.length(); i++) {
        if (word) {
            if (islower(input[i])) {
                c = input[i];
       //         resS << putchar (toupper(c));
                resS << (char) toupper(input[i]);
            }
            else {
                resS << input[i];
            }
            word = false;
        }
        else {
            resS << input[i];
        }
                
        if (!isalpha(input[i])) {
            word = true;
        }
    }
    cout << resS.str() << endl;

    return 0;
}