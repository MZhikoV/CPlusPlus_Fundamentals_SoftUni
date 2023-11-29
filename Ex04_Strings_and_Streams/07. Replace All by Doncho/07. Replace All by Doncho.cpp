#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    string input, findS, replaceS;
    getline(cin, input);
    getline(cin, findS);
    getline(cin, replaceS);

    size_t foundIndx = input.find(findS);

    while (foundIndx != string::npos) {
        
        input.replace(foundIndx, findS.length(), replaceS);

        foundIndx = input.find(findS,(foundIndx+ replaceS.length()));
    }

    cout << input << endl;

    return 0;
}