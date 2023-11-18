#include <iostream>

using namespace std;

int const MAXLEN = 100;

void readArray(int *array, int stopIdx) {
    for (int i = 0; i < stopIdx; i++) {
        cin >> array[i];
    }
}

void printRevArray(int *array, int stopIdx) {
    for (int i = (stopIdx - 1); i >= 0; i--) {
        cout << array[i] << " ";
    }
}


int main()
{
    int n;
    cin >> n;

    int NUM[MAXLEN];

    readArray(NUM, n);
    printRevArray(NUM, n);

    cout << endl;

    return 0;
}