#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    string look;
    getline(cin, look);

    string change;
    getline(cin, change);

    int foundI = input.find(look);

    while (foundI != string::npos) {
                
        input.replace(foundI, look.length(), change);

        foundI = input.find(look, foundI);
        
    }

    cout << input << endl;

    return 0;
}