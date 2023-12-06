#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string inp;
    getline(cin, inp);

    stringstream dig, let, chr;

    stringstream input(inp);

    char c;

    while (input >> c) {
        if (isalpha(c)) {
            let<<c;
        }
        else if (isdigit(c)) {
            dig << c;
        }
        else {
            chr << c;
        }
    }

    cout << dig.str() << endl;
    cout << let.str() << endl;
    cout << chr.str() << endl;

    return 0;
}