#include <iostream>

using namespace std;

const int MAXNUM = 99;

void reversArr(string* arr, int lastIdx) {
    string arr2[MAXNUM] = {};
    for (int i = 0; i < lastIdx; i++) {
        arr2[i] = arr[i];
    }
    int k = 0;
    for (int j = lastIdx - 1; j >= 0; j--) {
        arr[j] = arr2[k];
        k++;
    }
}

void printArr(string* arr, int lastIdx) {
    for (int i = 0; i < lastIdx; i++) {
       cout<<arr[i]<<' ';
    }
}

int main()
{
    int n;
    cin >> n;

    string arrS[MAXNUM] = {};

    for (int i = 0; i < n; i++) {
        cin >> arrS[i];
    }
    
    reversArr(arrS,n);
    printArr(arrS, n);

   /* for (int j = n - 1; j >= 0; j--) {
        cout << arrS[j] << ' ';
    }*/
    cout << endl;

    return 0;
}