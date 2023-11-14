#include <iostream>

using namespace std;

void printNum(int a);

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        printNum(i);
        cout << endl;
    }
    for (int j = num - 1; j >= 1; j--) {
        printNum(j);
        cout << endl;
    }
    return 0;
}

void printNum(int a) {
    for (int k = 1; k <= a; k++) {
        cout << k << ' ';
    }
} 