#include <iostream>

using namespace std;



void sign(int a);
void printSign(int a, string b);


int main()
{
    int num;
    cin >> num;

    sign(num);

    return 0;
}


void sign(int a) {
    string sign;
    if (a > 0) {
        sign = "positive";
    }
    else if (a < 0) {
        sign = "negative";
    }
    else {
        sign = "zero";
    }
    printSign(a, sign);
}

void printSign(int a, string b) {
    cout << "The number " << a << " is "<<b<<"." << endl;
}