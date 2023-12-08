#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

//function to read integer vector/list
void readIntV(list <int>& v1) {
    string inp;
    getline(cin, inp);

    stringstream inputS(inp);
    int num;

    while (inputS >> num) {
        v1.push_back(num);
    }
}

//function to print integer vector/list
void printIntV(list <int>& v1) {
    for (int num : v1) {
        cout << num << ' ';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    cin.ignore();
    
    list <int> check; //declaring a list;
    readIntV(check);

    list <int> install; //declaring a list;
    readIntV(install);

    list <int>::iterator it1, it2;

    list <int> result;

    for (it1 = check.begin(), it2 = install.begin(); it1 != check.end(), it2 != install.end(); it1++, it2++) {
        int diff = *it2 - *it1;
        result.push_back(*it2 / diff);
    }

    printIntV(result);

    return 0;
}