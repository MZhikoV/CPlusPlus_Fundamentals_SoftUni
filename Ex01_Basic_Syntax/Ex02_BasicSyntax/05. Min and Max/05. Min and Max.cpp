#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int currNum;
    int minNum = INT_MAX;
    int maxNum = INT_MIN;


    for (int i = 0; i < n; i++) {
        cin >> currNum;
        if (minNum > currNum) minNum = currNum;
        if (maxNum < currNum) maxNum = currNum;
    }
    cout << minNum << ' ' << maxNum << endl;

    return 0;
}