#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void readS(string& a) {
    getline(cin, a);
}

int main()
{
    string st1, st2;
    readS(st1);
    readS(st2);

    int founIdx = st2.find(st1);

    while (founIdx != string::npos) {
        st2.erase(founIdx, st1.length());
        founIdx = st2.find(st1);
    }
    cout << st2 << endl;
    return 0;
}