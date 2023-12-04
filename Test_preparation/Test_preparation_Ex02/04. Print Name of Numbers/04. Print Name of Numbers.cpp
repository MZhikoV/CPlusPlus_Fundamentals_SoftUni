#include <iostream>
#include <cmath>

using namespace std;

void oneToNine(int a);
void tenToNineteen(int a);
void twentyToNinety(int a);



int main()
{
    int num;
    cin >> num;

    int numDigits = 0;
    int check = num;
    int digit = 0;

    bool isTeen = false;

    if (num == 0) {
        cout << "zero" << endl;
        return 0;
    }
    while (check > 0) {
        check /= 10;
        numDigits++;
    }

    for (int i = numDigits; i > 0; i--) {
        digit = num / (int)(pow(10, i - 1));
        num %= (int)(pow(10, i - 1));
        if (i == 4 && digit != 0) {
            oneToNine(digit);
            cout << "thousand ";
        }
        else if (i == 3 && digit != 0) {
            oneToNine(digit);
            cout << "hundred ";
        }
        else if (i == 2 && digit != 0) {
            if (digit == 1) {
                isTeen = true;
                continue;
            }
            else {
                twentyToNinety(digit);
            }
        }
        else if (i == 1 && !isTeen) {
            oneToNine(digit);
        }
        else if (isTeen) {
            tenToNineteen(digit);
        }

    }
    cout << endl;

    return 0;

}

void oneToNine(int a) {
    string digit;
    switch (a) {
    case 1: digit = "one "; break;
    case 2: digit = "two "; break;
    case 3: digit = "three "; break;
    case 4: digit = "four "; break;
    case 5: digit = "five "; break;
    case 6: digit = "six "; break;
    case 7: digit = "seven "; break;
    case 8: digit = "eight "; break;
    case 9: digit = "nine "; break;
    }
    cout << digit;
}

void tenToNineteen(int a) {
    string digit;
    switch (a) {
    case 0: digit = "ten"; break;
    case 1: digit = "eleven"; break;
    case 2: digit = "twelve"; break;
    case 3: digit = "thirteen"; break;
    case 4: digit = "fourteen"; break;
    case 5: digit = "fiveteen"; break;
    case 6: digit = "sixteen"; break;
    case 7: digit = "seventeen"; break;
    case 8: digit = "eighteen"; break;
    case 9: digit = "nineteen"; break;
    }
    cout << digit;
}

void twentyToNinety(int a) {
    string digit;
    switch (a) {
    case 2: digit = "twenty "; break;
    case 3: digit = "thirty "; break;
    case 4: digit = "forty "; break;
    case 5: digit = "fifty "; break;
    case 6: digit = "sixty "; break;
    case 7: digit = "seventy "; break;
    case 8: digit = "eighty "; break;
    case 9: digit = "ninety "; break;
    }
    cout << digit;
}