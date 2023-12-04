#include <iostream>

using namespace std;

void printG(double a) {
    if (a>=2 && a < 3) {
        cout << "Fail";
    }
    else if (a < 3.5) {
        cout << "Poor";
    }
    else if (a < 4.5) {
        cout << "Good";
    }
    else if (a < 5.5) {;
    cout << "Very good";
    }
    else if (a <= 6 ) {
        cout << "Excellent";
    }
    cout << endl;
}

int main()
{
    double grade;
    cin >> grade;

    printG(grade);

    return 0;
}
