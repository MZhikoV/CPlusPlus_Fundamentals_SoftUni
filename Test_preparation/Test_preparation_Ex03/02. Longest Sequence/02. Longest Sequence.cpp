#include <iostream>

using namespace std;

const int MAX = 100;

void readA(int arr[], int idx) {
    for (int i = 0; i < idx; i++) {
        cin>> arr[i];
    }
}


int main()
{
    int n;
    cin >> n;

    int arr[MAX] = {};

    readA(arr, n);

    int cnt = 0, idx = 0;
    int cntCurr = 0, idxCurr = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i - 1] == arr[i]) {
            cnt++;
            //idx = i;
        }
        else {
            cnt=0;
            //idx = i;
        }
        if (cnt >= cntCurr) {
            cntCurr = cnt;
            idxCurr = i;
        }
    }

    for (int i = idxCurr - cntCurr; i <= idxCurr; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}