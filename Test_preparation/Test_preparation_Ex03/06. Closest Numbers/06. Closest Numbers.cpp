//#include <iostream>
//#include <climits>
//#include<cmath>
//
//using namespace std;
//
//const int MAX = 100;
//
//void readA(int arr[], int idx) {
//    for (int i = 0; i < idx; i++) {
//        cin >> arr[i];
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    int arr[MAX] = {};
//
//    readA(arr, n);
//
//    int diff = 0;
//    int minD = INT_MAX;
//
//    for (int i = 0; i < n-1; i++) {
//        for (int j = i+1; j < n; j++) {
//            diff=abs(arr[i] - arr[j]);
//            if (minD > diff) {
//                minD = diff;
//            }
//        }
//    }
//    if (n == 1) {
//        cout << arr[0];
//    }
//    else {
//        cout << minD << endl;
//    }
//
//    return 0;
//}

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
    if (n == 1) {
        minDiff = arrI[n];
    }

    cout << minDiff << endl;

    return 0;

}