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

    int seqCnt = 1, idx = 0, seqOld=1, lastidx=0;

    for (int i = 0; i < n-1; i++) {
        if (arrI[i] == arrI[i + 1]) {
            seqCnt++;
            if (seqOld <= seqCnt) {
                idx = i + 1;
                seqOld = seqCnt;
            }
        }
        else {
           // seqOld = seqCnt;
            seqCnt = 1;
            lastidx = i + 1;
        }
    }
    if (seqOld > 1) {
        for (int j = 1 + idx - seqOld; j <= idx; j++) {
            cout << arrI[j] << ' ';
        }
        cout << endl;
    }
    else {
        cout << arrI[lastidx] << endl;
    }
    

    return 0;
}