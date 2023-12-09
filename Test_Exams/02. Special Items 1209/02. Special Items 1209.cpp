#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

//function to read integer vector/list
void readIntV(list<char>& v1) {
    string inp;
    getline(cin, inp);

    stringstream inputS(inp);
    char num;

    while (inputS >> num) {
        v1.push_back(num);
    }
}

bool isVowel(char a) {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        return true;
    }
    return false;
}

int main()
{
    list<char> inpV; //declaring a vector;
    readIntV(inpV);

    list<char> ::iterator it1;
    int sum = 0;

    for (it1 = inpV.begin(); it1 != inpV.end(); ) {
        if (*it1 + 1 == *it1 && !isVowel(*it1 + 1)) {
            it1 + 1 = inpV.erase(it1 + 1);
        }
        {
        else {
            it1++;
        }
    }

   
    cout << endl;

    return 0;
}

//s.14.02 p.14.10