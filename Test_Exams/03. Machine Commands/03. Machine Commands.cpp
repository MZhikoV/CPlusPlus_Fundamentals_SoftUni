#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

 //   ostringstream resultS;
    int inpIndx = 0;
    int sum = 0;
    int resres[50] = {};

    while (input != "end") {

        if (input == "sum") {
            /*int*/ sum = resres[inpIndx] + resres[inpIndx - 1];
            //resres[inpIndx - 1] = sum;
           // inpIndx--;
        }
        else if (input=="subtract") {

        }
        else if (input == "concat") {

        }
        else if (input == "discard") {

        }
        else {
            resres[inpIndx]= stoi(input);
        }

        getline(cin, input);
        inpIndx++;
    }

    
    for (int i = 0; i < inpIndx; i++) {
        cout << resres[i] << endl;
    }

    cout << sum << endl;

}

//s 15.48