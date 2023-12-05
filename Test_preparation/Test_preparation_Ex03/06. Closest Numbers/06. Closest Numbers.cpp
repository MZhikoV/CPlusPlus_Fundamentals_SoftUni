#include <iostream>
#include <climits>
#include<cmath>

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

    int diff = 0;
    int minD = INT_MAX;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            diff=abs(arr[i] - arr[j]);
            if (minD > diff) {
                minD = diff;
            }
        }
    }
    if (n == 1) {
        cout << '0';
    }
    else {
        cout << minD << endl;
    }

    return 0;
}

