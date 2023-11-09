// 06SumofOddNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int br = 0, sum=0;

    for (int i = 1;; i += 2) {
        if (br < n) {
            cout << i << endl;
            br++;
            sum += i;
        }
        else {
            break;
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}