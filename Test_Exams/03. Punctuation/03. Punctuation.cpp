#include <iostream>
#include <string>
#include <sstream>
#include <cctype>





using namespace std;

int main()
{
    string input;
    getline(cin, input);

    string tempString;

    ostringstream symCountS;

    int sentCount = 0;

    while (true) {
        int foundIndx = input.find('|');
        int symb = 0;

        if (foundIndx == string::npos) {
            break;
        }

        tempString = input.substr(0, foundIndx);
        input.erase(0, foundIndx+1);

        for (char c : tempString) {
            if (ispunct(c)) {
                symb++;
            }
        }

        symCountS << symb;
    }


    

    string resultS = symCountS.str();

    for (int i = 0; i < resultS.length() - 1; i++) {
        for (int j = i + 1; j < resultS.length(); j++) {
            char temp;
            if (resultS[i] > resultS[j]) {
                temp = resultS[i];
                resultS[i] = resultS[j];
                resultS[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < resultS.length(); i++) {
        int sentCount = 1;
        for (int j = i + 1; j < resultS.length(); j++) {
            if (resultS[i] == resultS[j]) {
                sentCount++;
                
            }
        }
        if (resultS[i] != '0') {
            cout << resultS[i] << " symbol sentences: " << sentCount << endl;
        }
        i += sentCount-1;
    }


    //cout << symCountS.str() << endl;

    return 0;
}
