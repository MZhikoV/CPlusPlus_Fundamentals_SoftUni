#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int main()
{
    string input;
    getline(cin, input);

    ostringstream newSent;

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        c += 3;
        newSent << c;
    }
    cout << newSent.str() << endl;

    return 0;
}