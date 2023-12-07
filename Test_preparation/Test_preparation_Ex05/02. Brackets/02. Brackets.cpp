#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

//function to print integer vector/list
void printIntV(vector<char>& v1) {
    for (char c : v1) {
        cout << c << ' ';
    }
    cout << endl;
}

//function for clearing the brackets
void clearB(vector<char>& v1,char a, char b) {
    vector<char>::iterator it1 = v1.begin();
    for (; it1 != v1.end();) {
        if (*it1 == a && *(it1 + 1) == b) {
            v1.erase(it1 + 1);
            v1.erase(it1);
            it1 = v1.begin();
        }
        else {
            it1++;
        }
    }
}

//function to check is there is any brackets left 
bool checkB(vector<char>& v1, char a, char b) {
    vector<char>::iterator it1;

    for (it1 = v1.begin(); it1 != v1.end(); it1++) {
        if (*it1 == a || *it1 == b) {
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    getline(cin, input);

    istringstream inp(input);

    vector<char> inp1;

    char c;

    while (inp>>c) {
        inp1.push_back(c);
    }

    clearB(inp1, '(', ')');

    if (!checkB(inp1, '(', ')')) {
        cout << "invalid" << endl;
        return 1;
    }

    clearB(inp1, '[', ']');

    if (!checkB(inp1, '[', ']')) {
        cout << "invalid" << endl;
        return 1;
    }

    clearB(inp1, '{', '}');

    if (inp1.size()>0) {
        cout << "invalid" << endl;
        return 1;
    }
 
    cout << "valid" << endl;

    return 0;
}