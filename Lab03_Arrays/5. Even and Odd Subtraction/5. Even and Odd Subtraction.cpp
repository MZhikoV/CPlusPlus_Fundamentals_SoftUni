#include <iostream>

using namespace std;

const int MAXNUM = 99;

void sumArr(int* arr, int lastIdx, int &sumE, int &sumO) {
    for (int i = 0; i < lastIdx; i++) {
        if (arr[i]%2==0) {
            sumE += arr[i];
        }
        else {
            sumO += arr[i];
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arrI[MAXNUM] = {};

    for (int i = 0; i < n; i++) {
        cin >> arrI[i];
    }
    int sumE = 0, sumO = 0;

    sumArr(arrI, n, sumE, sumO);

    cout << sumE - sumO << endl;

    return 0;
}