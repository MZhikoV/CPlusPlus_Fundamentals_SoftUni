#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;
//function to read integer vector/list
void readIntV(vector<char>& v1) {
    string inp;
    getline(cin, inp);

    stringstream inputS(inp);
    char num;

    while (inputS >> num) {
        v1.push_back(num);
    }
}

int main()
{
    vector <char> inpV; //declaring a vector;
    readIntV(inpV);

    vector<char>::iterator it1;

    int sum = 0;

    for (it1 = inpV.begin(); it1 != inpV.end(); it1++) {
        if (isdigit(*it1)) {
            sum += (*it1 - 48);
        }
    }

    if (isalpha(sum)) {
        cout << (char)sum;
    }
    else {
        cout << sum;
    }
    cout << endl;

    return 0;    
}
