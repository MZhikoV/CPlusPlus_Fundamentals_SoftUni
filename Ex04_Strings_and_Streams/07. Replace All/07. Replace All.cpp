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

    while (true) {
        size_t foundIndx= input.find(findS);
        if (foundIndx == string::npos) {
            break;
        }
        input.replace(foundIndx, findS.length(), replaceS);
    }
 
    cout << input << endl;
   
    return 0;
}