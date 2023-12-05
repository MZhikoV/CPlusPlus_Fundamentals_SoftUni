#include <iostream>
#include <climits>

using namespace std;

const int MAX = 100;

void readA(int arr[], int idx) {
    for (int i = 0; i < idx; i++) {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[MAX] = {};

    readA(arr, n);


    int arrR[10] = { 0 };
    
    int br = 0;

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                br++;
            }
        }
        arrR[i] = br;
        br = 0;
    }

    int maxN = INT_MIN;

    for (int i = 0; i <= 9; i++) {
        if (arrR[i] > maxN) {
            maxN = arrR[i];
        }
    }

    for (int i = 0; i <= 9; i++) {
        if (arrR[i] == maxN) {
            cout<<i<<' ';
        }
    }
    cout << endl;

    return 0;
}
