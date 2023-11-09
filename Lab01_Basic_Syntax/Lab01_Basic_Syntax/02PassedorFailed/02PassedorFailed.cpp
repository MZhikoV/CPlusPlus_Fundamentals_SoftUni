// 02PassedorFailed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double grade;
    cin >> grade;

    if (grade < 3) {
        cout << "Failed!" << endl;
    }
    else {
        cout << "Passed!" << endl;
    }
    return 0;
}