#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream allS(input);

    int sum = 0;

    ostringstream txtS;

    string wordS;

    while ( allS >> wordS) {

        istringstream wordStream(wordS);
        int isnumber;
        wordStream >> isnumber;

        if (wordStream) {
            sum += isnumber;
        }
        else {
            txtS << wordS << ' ';
        }
    }
    cout << sum << endl;
    cout << txtS.str() << endl;

    return 0;
}