#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

//function to read integer vector/list whith getline using string/stream
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
    vector <int> inpV; //declaring a vector/list;
  
    readIntV(inpV);//function to read integer vector/list whith getline using string/stream

    printIntV(inpV);

    return 0;
}