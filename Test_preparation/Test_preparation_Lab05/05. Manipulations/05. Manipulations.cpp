#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

//function to read integer vector/list
void readIntV(vector<int>& v1) {
    string inp;
    getline(cin, inp);

    stringstream inputS(inp);
    int num;

    while (inputS >> num) {
        v1.push_back(num);
    }
}

//function to print integer vector/list
void printIntV(vector<int>& v1) {
    for (int num : v1) {
        cout << num << ' ';
    }
    cout << endl;
}

int main()
{
    vector <int> inpV; //declaring a vector;
    readIntV(inpV);

    string input;
    getline(cin, input);

    while (input != "end") {
        istringstream inp(input);
        string word;
        inp >> word;

        int a;
        inp >> a;

        if (word == "Add") {
            
            inpV.push_back(a);
        }
        else if (word == "Remove") {

            for (vector<int>::iterator it1 = inpV.begin(); it1 != inpV.end(); it1++) {

                if (*it1 == a) {
                    it1 = inpV.erase(it1);
                    break;
                }
            }
        }
        else if (word == "RemoveAt") {
            
            inpV.erase(inpV.begin()+a);
        }
        else if (word == "Insert") {
            int b;
            inp >>b;

            inpV.insert(inpV.begin() + b,a);
        }

        getline(cin, input);
    }

    printIntV(inpV);

    return 0;
}