#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void writeS(string& a, stringstream & b) {
    for (int i = 0; i < a.length(); i++) {
        b << a[i];
    }
}

int main()
{
    string inp;
    getline(cin, inp);

    stringstream input(inp);

    stringstream result;

    string str1;

    while (input >> str1) {
        for (int i = 1; i <= str1.length(); i++) {
            writeS(str1, result);
        }        
    }
    cout << result.str() << endl;

    return 0;
}