#include <iostream>

using namespace std;

const int MAXNUM = 99;

int avgArr(int* arr, int endIdx) {
    int sum = 0;
    for (int i = 0; i < endIdx; i++) {
        sum += arr[i];
    }
    return sum / endIdx;
}

int main()
{
    int n;
    cin >> n;

    int arrI[MAXNUM] = {};

    for (int i = 0; i < n; i++) {
        cin >> arrI[i];
    }

    int avgA = avgArr(arrI, n);

    for (int i = 0; i < n; i++) {
        if (arrI[i] >= avgA) {
            cout << arrI[i] << ' ';
        }
    }
    cout << endl;

    return 0;
}