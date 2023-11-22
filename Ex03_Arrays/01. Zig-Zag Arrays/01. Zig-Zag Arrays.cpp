#include <iostream>

using namespace std;

const int MAXNUM = 99;

void printArr(int* arr, int endIdx) {
    for (int i = 0; i < endIdx; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int arr1[MAXNUM] = {};
    int arr2[MAXNUM] = {};


    //Lecturer solution
    int* first = arr1;
    int* second = arr2;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        first[i] = a;
        second[i] = b;

        //swap places for each iteration
        int* temp = first;
        first = second;
        second = temp;
    }
    
    //My solution
    
    /*for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cin >> arr2[i - 1] >> arr1[i - 1];
        }
        else {
            cin >> arr1[i - 1] >> arr2[i - 1];
        }
    }*/

    printArr(arr1, n);
    printArr(arr2, n);

    return 0;
}