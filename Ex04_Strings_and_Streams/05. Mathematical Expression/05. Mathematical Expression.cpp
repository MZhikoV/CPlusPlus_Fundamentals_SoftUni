#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    
    string input;
    getline(cin, input);
    
    int openB = 0, closeB = 0;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '(') {
            openB++;
        }
        else if (input[i] == ')') {
            closeB++;
        }
    }
    if (openB == closeB) {
        cout << "correct";
    }
    else {
        cout << "incorrect";
    }

    cout << endl;

    return 0;
}