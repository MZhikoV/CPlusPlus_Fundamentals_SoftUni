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

    int from = 0;
    int to = inpV.size() - 1;

    vector <int> result;

    for (; from<=to /* || to == 0*/; from++, to--) {
        if (from == to) {
            result.push_back(inpV[from]);
        }
        else {
            result.push_back(inpV[from] + inpV[to]);
        }
    }

    vector<int>::iterator it1;

    for (it1 = result.begin(); it1 != result.end(); it1++) {
        cout << *it1 << ' ';
    }
    cout << endl;


   // printIntV(result);

    return 0;
}