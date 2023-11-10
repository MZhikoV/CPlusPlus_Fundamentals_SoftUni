#include <iostream>

using namespace std;

int main()
{
    int startNum, endNum, sum = 0;
    cin >> startNum >> endNum;

    for (int i = startNum; i <= endNum; i++) {
        sum += i;
        cout << i << ' ';
    }
    cout << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}