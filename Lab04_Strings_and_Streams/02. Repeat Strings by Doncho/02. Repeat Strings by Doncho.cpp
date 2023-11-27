#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream tempStream(input);

    ostringstream resultStream;

    for (string wordS; tempStream >> wordS;) {
        int numIndx = wordS.length();
        while (numIndx--) {
            resultStream << wordS;
        }
    }
    cout << resultStream.str() << endl;

    return 0;
}