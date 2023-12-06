#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

bool isalpnum(string& a) {
    for (int i = 0; i < a.length(); i++) {
        if (!isalnum(a[i])) {
            if (a[i] != '-' && a[i] != '_') {
                return false;
            }
        }
    }
    return true;
}

bool lenstr(string& a) {
    if (a.length() < 3 || a.length() > 16) {
        return false;
    }
    return true;
}

int main()
{
    string inp;
    getline(cin, inp);

    int startIdx=0;

    while (true) {

        int foundIdx = inp.find(", ", startIdx);
        string pass = inp.substr(startIdx, foundIdx- startIdx);
        if (lenstr(pass) && isalpnum(pass)) {
            cout << pass << endl;
        }
        startIdx = foundIdx + 2;
        

        if (foundIdx == string::npos)
        {
            break;
        }
    }
    return 0;
}