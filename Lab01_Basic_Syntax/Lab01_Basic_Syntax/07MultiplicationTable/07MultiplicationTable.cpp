// 07MultiplicationTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " X " << i << " = " << num * i << endl;
    }
    return 0;
}