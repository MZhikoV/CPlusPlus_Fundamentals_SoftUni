#include <iostream>

using namespace std;

const int MAXNUM = 99;

void inputArr(int* arr, int lastIdx) {
    for (int i = 0; i < lastIdx; i++) {
        cin >> arr[i];
    }
}

void printArr(int* arr, int lastIdx) {
    for (int i = 0; i < lastIdx; i++) {
        cout<< arr[i]<<' ';
    }
}

int main()
{
    int n;
    cin >> n;

    int arrI[MAXNUM] = {};

    inputArr(arrI, n);

    int rot;
    cin >> rot;

    int firstEl = 0;

    for (int i = 1; i <= rot; i++) {
        firstEl = arrI[0];
        for (int j = 0; j < n-1; j++) {
            arrI[j] = arrI[j + 1];
        }
        arrI[n - 1] = firstEl;
    }

    printArr(arrI, n);

    cout << endl;

    return 0;
}