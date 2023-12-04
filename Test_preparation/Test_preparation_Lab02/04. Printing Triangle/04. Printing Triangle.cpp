#include <iostream>

using namespace std;

void printPart(int b) {
    for (int j = 1; j <= b; j++) {
        cout << j << ' ';
    }
}

void printTri(int a) {

    for (int i = 1; i <= a; i++) {
        printPart(i);
        cout << endl;
    }

    for (int i = a - 1; i > 0; i--) {
        printPart(i);
        cout << endl;
    }
}


int main()
{
    int n;
    cin >> n;

    printTri(n);

    return 0;
}