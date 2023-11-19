#include <iostream>

using namespace std;

const int MAXNUM = 99;

int main()
{
    int n;
    cin >> n;

    int arrI[MAXNUM] = {};

    for (int i = 0; i < n; i++) {
        cin >> arrI[i];
    }

    int currCnt = 0, resArr[10] = {};
    
    for (int j = 0; j <= 9; j++) {
        currCnt = 0;

        for (int i = 0; i < n; i++) {
            if (j == arrI[i]) {
                currCnt++;
            }
        }
        resArr[j] = currCnt;
    }

    int maxNum = 0;

    for (int j = 0; j <= 9; j++) {
        if (resArr[j] >= maxNum) {
            maxNum = resArr[j];
        }
    }

    for (int j = 0; j <= 9; j++) {
        if (maxNum == resArr[j]) {
            cout<<j<<' ';
        }
    }

    cout << endl;

    return 0;

}