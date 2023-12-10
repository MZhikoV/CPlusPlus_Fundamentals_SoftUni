#include <iostream>
#include <cctype>
#include <string>
#include <sstream>

using namespace std;

bool isVowel(char c) {
    string check = { 'a', 'e', 'i', 'o','u', 'y' };
    
    for (char d : check) {
        if (d == c) {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string input;
    getline(cin, input);

    stringstream inpST(input);

    int sumV = 0, sumN = 0;
    char c;

    for (int i = 0; i < n; i++) {
        inpST >> c;
        if (isupper(c)) {
            c=tolower(c);
        }

        if (!ispunct(c)&&!isdigit(c)) {
            if (isVowel(c)) {
                sumV++;
            }
            else {
                sumN++;
            }
        }
    }

    cout << sumV << ' ' << sumN << endl; 

    return 0;
}

//s.09.00