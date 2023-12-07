#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

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
    vector <int> inpA; //declaring a vector;
    readIntV(inpA);

    vector <int> inpB; //declaring a vector;
    readIntV(inpB);

    vector <int> result; //declaring a vector;

    ostringstream train;

    bool finA = false;

    vector<int>::iterator it1, it2;

    for (it1 = inpA.end() - 1, it2 = inpB.end() - 1; it1 >= inpA.begin() && it2 >= inpB.begin(); ) {
        if (*it1 < *it2) {
            result.insert(result.begin(), *it1);
            train << 'A';
            if (it1 != inpA.begin()) {
                it1--;
            }
            else {
                finA = true;
                break;
            }
        }
        else {
            result.insert(result.begin(), *it2);
            train << 'B';
            if (it2 != inpB.begin()) {
                it2--;
            }
            else {
                break;
            }
        }
    }
    if (!finA) {
        for (; it1 >= inpA.begin(); it1--) {
            result.insert(result.begin(), *it1);
            train << 'A';
            if (it1 == inpA.begin()) {
                break;
            }
        }
    }
    else {

        for (; it2 >= inpB.begin(); it2--) {
            result.insert(result.begin(), *it2);
            train << 'B';
            if (it2 == inpB.begin()) {
                break;
            }
        }
    }
    
    cout << train.str() << endl;
    printIntV(result);

    return 0;
}