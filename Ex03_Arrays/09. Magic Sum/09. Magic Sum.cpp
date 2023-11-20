#include <iostream>

using namespace std;

const int MAXNUM = 99;

void inputArr(int* arr, int lastIdx) {
    for (int i = 0; i < lastIdx; i++) {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int arrI[MAXNUM] = {};

    inputArr(arrI, n);

    int magSum;
    cin >> magSum;
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arrI[i] + arrI[j]) == magSum) {
                cout << arrI[i] << ' ' << arrI[j] << endl;
            }
        }
    }
    return 0;
}