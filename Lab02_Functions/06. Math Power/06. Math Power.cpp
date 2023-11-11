#include <iostream>


using namespace std;

int powF(int a, int b) {
    int powN = 1;
    for (int i = 1; i <= b; i++) {
        powN *= a;
    }
    return powN;
}

int main()
{
    int num, poww;
    cin >> num >> poww;

    int result = powF(num, poww);
    cout << result << endl;

    return 0;
}