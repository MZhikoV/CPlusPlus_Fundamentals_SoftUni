#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

//function to read integer vector/list whith getline using string/stream
void readIntV(vector<string>& v1) {
    string inp;
    getline(cin, inp);

    while (inp != "end") {
        if (inp == "empty") {
            v1.push_back(" ");
        }
        else {
            v1.push_back(inp);   
        }
        getline(cin, inp);
    }
}

//function to print integer vector/list
void printIntV(vector<string>& v1) {
    cout << '|';

    vector<string>::iterator it1;

    for (it1 = v1.begin(); it1 != v1.end();it1++) {
        cout << *it1 << '|';
    }
    cout << endl;
}

int main()
{
    vector <string> inpV;

    readIntV(inpV);

    char c;
    cin >> c;

    while (c != 'E') {
        if (c == 'P') {
            printIntV(inpV);
        }
        else if (c == 'M') {

            int oldP, newP;
            cin >> oldP >> newP;

            string temp;

            vector<string>::iterator it1=inpV.begin();

            temp = *(it1 + oldP - 1);
           // cout << temp;
            inpV.erase(it1 + oldP - 1);
            inpV.insert(it1= inpV.begin()+newP-1, temp);

            //stringstream temp;
            //    temp<< inpV[oldP];
            //    cout<< inpV[oldP];
            //inpV.erase(inpV.begin()+oldP-1);
            //inpV.insert(inpV.begin() + newP - 1, temp.str());
            ////what if we move after

            printIntV(inpV);
        }
        else if (c == 'L') {

            int remP;
            cin >> remP;
            inpV.erase(inpV.begin() + remP - 1);
            //remove specific wagon
            //read more inputs
            printIntV(inpV);
        }
        cin >> c;
    }

    return 0;

}

