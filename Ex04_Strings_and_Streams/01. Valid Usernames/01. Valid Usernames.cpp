#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream tempStream(input);
    ostringstream allPass;

   
   // ostringstream currPass;

    int startIndx = 0;

    while (true) {
        size_t foundIndx = input.find(", ", startIndx);
        
        string currPass = input.substr(startIndx, foundIndx- startIndx);

        bool corr = true;

        for (int i=0; i<currPass.size();i++) {
            
            if (currPass.length() < 3 || currPass.length() > 16) {
                corr = false;
                break;
            }
            else if (isalpha(currPass[i])) {
                corr = true;
                continue;
            }
            else if (isdigit(currPass[i])) {
                corr = true;
                continue;
            }
            else if (currPass[i] == 45 || currPass[i] == 95) {
                corr = true;
                continue;
            }
            else {
                corr = false;
                break;
            }
        }
        if (corr) {
            allPass << currPass << endl;
        }
        startIndx = foundIndx + 2;

        if (foundIndx == string::npos) {
            break;
        }
    }

    cout << allPass.str() << endl;

    return 0;
}