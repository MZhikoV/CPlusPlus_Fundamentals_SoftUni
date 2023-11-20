#include <iostream>

using namespace std;

const int MAXNUM = 99;

void  inputArr(int* arr, int lastIdx) {
    for (int i = 0; i < lastIdx; i++) {
        cin >> arr[i];
    }
}

void productArr(int* arr1, int* arr2, int lastIdx) {
    int p = 0;
    for (int i = 0; i < lastIdx; i++) {
        for (int j = 0; j < lastIdx; j++) {
            arr2[p] = arr1[i] * arr1[j];
            p++;
        }
    }
}

void  printArr(int* arr, int lastIdx) {
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

    int arrIP[MAXNUM] = {};

    productArr(arrI, arrIP, n);

    printArr(arrIP, n*n);

    cout << endl;

    return 0;
}