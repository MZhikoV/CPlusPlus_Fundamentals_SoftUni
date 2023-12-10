#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
int main()
{
    string input;
    getline(cin, input);

    stringstream inpST(input);

    int currV = 0;
    int prevV = 0;
    int temp;
    
    string cc;
    char c;
    int num=0;
    bool dig = false;

    while (inpST >> cc) {
        if (cc.length() == 1) {
            c = cc[0];
            if (isdigit(c)) {
                num = c - 48;
                dig = true;
            }
        }
        else {
            for (int j = 0; j < cc.length(); j++) {
                num += (cc[j] - 48) * pow(10, (cc.length() - 1 - j));
                dig = true;
            }
        }

        if (dig) {
            prevV = currV;
            currV = num;
        }
        else {
            if (c == '+') {
                temp = prevV;
                prevV = currV;
                currV =temp + currV;
            }
            else if (c == '-') {
                temp = prevV;
                prevV = currV;
                currV = temp-currV;
            }
            else if (c == '*') {
                temp = prevV;
                prevV = currV;
                currV = currV * temp;
            }
            else if (c == '/') {
                temp = prevV;
                prevV = currV;
                currV = (int)temp / (int)currV;
            }
        }
        dig = false;
        num = 0;
    }

    cout << currV << ' ' << prevV << endl;

    return 0;
}