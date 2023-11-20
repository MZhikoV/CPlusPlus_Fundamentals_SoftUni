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

    bool isGreater = false;

    for (int i = 0; i < n; i++) {
        isGreater = true; 
        for (int j = i+1; j < n; j++) {
            if (arrI[i] <= arrI[j]) {
                isGreater = false;
                break;
            }
        }
        if (isGreater) {
            cout << arrI[i] << ' ';
        }
    }
    cout << endl;

    return 0;

}