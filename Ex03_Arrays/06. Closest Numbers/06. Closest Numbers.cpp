#include <iostream>
#include <cmath>
#include <climits>

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

    int diff = 0;
    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                diff = abs(arrI[i] - arrI[j]);
                if (diff < minDiff) {
                    minDiff = diff;
                }
            }
        }
    }

    cout << minDiff << endl;

    return 0;

}