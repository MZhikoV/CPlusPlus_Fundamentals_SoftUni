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
    vector <int> inpV;
    readIntV(inpV);

    vector<int>::iterator it1;

    

    for (it1 = inpV.begin(); it1 != inpV.end(); ) {
        if (*it1 < 0) {
            it1=inpV.erase(it1);
        }
        else {
            it1++;
        }
    }

    vector <int> revV;

    if (inpV.size()) {
        for (it1 = inpV.end() - 1; ; it1--) {
            revV.push_back(*it1);
            if (it1 == inpV.begin()) {
                break;
            }
        }
        printIntV(revV);
    }
    else {
        cout << "empty" << endl;
    }

    return 0;
}