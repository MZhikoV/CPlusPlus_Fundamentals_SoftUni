#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int main()
{
    string input;
    getline(cin, input);

    ostringstream newSent;

    for (char c:input) {
        c += 3;
        newSent << c;
    }
    cout << newSent.str() << endl;

    return 0;
}