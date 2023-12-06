#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    stringstream outp;

    for (int i = 1; i <= input.length(); i++) {
        if (input[i - 1] == input[i]) {
            if (input[i - 1] == 'a' || input[i - 1] == 'e'
                || input[i - 1] == 'i' || input[i - 1] == 'o'
                || input[i - 1] == 'u') {
                outp << input[i - 1];
            }
            continue;
        }
        else {
            outp << input[i - 1];
        }
    }
    cout << outp.str() << endl;
    return 0;
}


//s 18.43 e 18.53