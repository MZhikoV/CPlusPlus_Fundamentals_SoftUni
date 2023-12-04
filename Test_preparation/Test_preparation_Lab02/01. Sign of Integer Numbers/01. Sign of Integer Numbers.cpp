#include <iostream>

using namespace std;

void printSign(int a) {
    cout << "The number " << a << " is ";
    
    if (a > 0) {
        cout << "positive.";
    }
    else if (a < 0) {
        cout << "negative.";
    }
    else {
        cout << "zero.";
    }
    cout << endl;
}


int main()
{
    int n;
    cin >> n;

    printSign(n);
    
    return 0;
}
