#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream allS(input);

    ostringstream numS;
    ostringstream txtS;

    int sum = 0;

    for (string wordS; allS >> wordS;) {
        if (isdigit(wordS[0])||wordS[0]=='-') {
            sum += stoi(wordS);
        }
        else {
            txtS << wordS << ' ';
        }
    }
    cout << sum << endl;
    cout << txtS.str() << endl;

    return 0;
}