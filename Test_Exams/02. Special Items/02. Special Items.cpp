#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isVowel(char c, string vowels) {
    for (int i = 0; i < vowels.length(); i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

int main()
{
    string input;
    getline(cin, input);

    ostringstream resultS;

    string vowels = { 'a','e','i','o','u' };

    resultS << input[0];

    for (int i = 1; i<input.length(); i++) {
        if (input[i - 1] != input[i]) {
            resultS << input[i];
        }
        else if (isVowel(input[i], vowels)) {
            resultS << input[i];
        }
    }

    cout << resultS.str() << endl;

    return 0;

}