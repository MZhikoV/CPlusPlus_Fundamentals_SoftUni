#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    ostringstream newS;
    string tempS;
    
    int foundIndx = input.find(" ");
    int startIndx = 0;
    //for the parts of the string before the last empty space is found
    while (foundIndx != string::npos) {
        tempS = input.substr(startIndx, foundIndx- startIndx);
        for (int i = 0; i < tempS.length(); i++) {
            newS << tempS;
        }
        startIndx = foundIndx + 1;
        foundIndx = input.find(" ", foundIndx+1);
    }
    //for the last part of the string or if the string doesn't have spaces
    tempS = input.substr(startIndx, input.length()- startIndx);
    for (int i = 0; i < tempS.length(); i++) {
        newS << tempS;
    }

    cout << newS.str() << endl;

    return 0;
}