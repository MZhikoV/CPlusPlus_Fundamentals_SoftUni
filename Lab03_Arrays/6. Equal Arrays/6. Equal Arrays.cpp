#include <iostream>

using namespace std;

const int MAXNUM = 99;

void readArr(int* arr, int maxIdx) {
    for (int i = 0; i < maxIdx; i++) {
        cin >> arr[i];
    }
}

bool areEq(int* arr1, int* arr2, int maxIdx, int& sum, int& idx) {
    for (int i = 0; i < maxIdx; i++) {
        if (arr1[i] == arr2[i]) {
            sum += arr1[i];
        }
        else {
            idx = i;
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int arr1[MAXNUM] = {};
    int arr2[MAXNUM] = {};
    
    readArr(arr1, n);
    readArr(arr2, n);

    int sum = 0;
    int idx = 0;

    bool chEq = areEq(arr1, arr2, n, sum, idx);

    if (chEq) {
        cout << "Arrays are identical. Sum: " << sum << endl;
    }
    else {
        cout << "Arrays are not identical. Found difference at " << idx << " index." << endl;
    }
    return 0;
}