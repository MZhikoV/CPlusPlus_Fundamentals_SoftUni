#include <iostream>
#include <string>

using namespace std;

int strV(string& input) {
    int sum = 0;
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        sum += c;
    }
    return sum;
}

int isGreater(int a, int b) {
    if (a > b) {
        return a;
    }
        return b;
}

string isGreaterS(string & a, string& b) {
    if (a > b) {
        return a;
    }
    return b;
}


int main()
{
    string input;
    getline(cin, input);

    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    char c1, c2;
    int i1, i2;
    int ss1, ss2;
    if (input == "string") {
        ss1 = strV(s1);
        ss2 = strV(s2);
        cout << isGreaterS(s1, s2);
    }
    else if (input == "char") {
        c1 = s1[0];
        c2 = s2[0];
        cout << (char)isGreater(c1, c2);
    }
    else {
        i1 = stoi(s1);
        i2 = stoi(s2);
        cout << isGreater(i1, i2);
    }
    
    cout << endl;

    return 0;
}