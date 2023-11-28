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

//    int startIndx = 0;

    ostringstream indx;

    while (true) {
        size_t foundIndx= input.find(findS);
        if (foundIndx == string::npos) {
            break;
        }
        input.replace(foundIndx, findS.length(), replaceS);
    }
  /*  size_t foundIndx = 0;
   // for (string wordS; checkS >> wordS;) {
        foundIndx = wordS.find(findS);
        if (foundIndx!=0) {
            size_t lenS = findS.length();
            wordS.replace(foundIndx, lenS, replaceS);
        }
        resultS << wordS << ' ';
        foundIndx = 0;
    }*/

   // cout << resultS.str() << endl;

    cout << indx.str() << endl;
    
        cout << input << endl;
   
    return 0;
}