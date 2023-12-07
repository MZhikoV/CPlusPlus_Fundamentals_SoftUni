#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

//function to read integer vector/list
void readIntV(list<int>& v1) {
    string inp;
    getline(cin, inp);

    stringstream inputS(inp);
    int num;

    while (inputS >> num) {
        v1.push_back(num);
    }
}

//function to print integer vector/list
void printIntV(list<int>& v1) {
    for (int num : v1) {
        cout << num << ' ';
    }
    cout << endl;
}

int main()
{
    list<int> inp1;
    readIntV(inp1);

    list<int> inp2;
    readIntV(inp2);

    list<int>::iterator it1, it2;

    list <int> result;

    for (it1 = inp1.begin(), it2 = inp2.begin(); it1 != inp1.end() && it2 != inp2.end();it1++,it2++) {
        result.push_back(*it1);
        result.push_back(*it2);
    }

    for (; it1 != inp1.end(); it1++) {
        result.push_back(*it1);
    }

    for (; it2 != inp2.end(); it2++) {
        result.push_back(*it2);
    }

    printIntV(result);

    return 0;
}