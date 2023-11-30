#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int start = 1;
    while (n) {
        
        cout << start << endl;
        
        sum += start;
        
        start += 2;
        
        n--;
    }


    /*for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
            sum += i;
        }
    }*/

    cout << "Sum: "<<sum << endl;

    return 0;
}