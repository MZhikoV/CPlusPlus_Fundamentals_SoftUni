#include <iostream>
#include<array>

using namespace std;

const int MAXNUM = 50;

void readArray(int* arr1, int indx) {
    for (int i = 0; i < indx; i++) {
        cin >> arr1[i];
    }
}

double averageNumInArray(int* arr1, int indx) {
    int sum = 0;
    for (int i = 0; i < indx; i++) {
        sum+= arr1[i];
    }
    return (sum / indx);
}

void lowerThanAverageArray(int* arr1, int*arr2, int indx, double avg, int* indx2) {
    int arr2Indx = 0;
    for (int i = 0; i < indx; i++) {
        if (arr1[i] < avg) {
            arr2[arr2Indx] = arr1[i];
            arr2Indx++;
        }
    }
    *indx2 = arr2Indx;
}

void sortDescendingArray(int* arr1, int indx) {
    int temp;
    for (int i = 0; i < indx-1; i++) {
        for (int j = i + 1; j < indx; j++) {
            if (arr1[i] < arr1[j]) {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
}

int evenNumInArray(int* arr1, int*arr2, int indx) {
    int index2 = 0;
    for (int i = 0; i < indx; i++) {
            if (arr1[i]%2==0) {
                arr2[index2] = arr1[i];
                index2++;
            }
    }
    return index2;
}

void printArray(int* arr1, int indx) {
    for (int i = 0; i < indx; i++) {
        cout<< arr1[i]<<' ';
    }
    cout << endl;
}

int main()
{
    int num;
    cin >> num;

    if (num <= 0) {
        cout << "No" << endl;
        return 1;
     }

    int inpA[MAXNUM] = {};

    readArray(inpA, num);

    double avgNum = averageNumInArray(inpA, num);

    int lowerA[MAXNUM] = {};

    int arr2Indx = 0;

    lowerThanAverageArray(inpA, lowerA, num, avgNum, &arr2Indx);

    sortDescendingArray(lowerA, arr2Indx);

    int evenA[MAXNUM] = {};

   int evenAIndx= evenNumInArray(lowerA, evenA, arr2Indx);
   if (evenAIndx ==0) {
       cout << "No" << endl;
   }
   else {
       printArray(evenA, evenAIndx);
   }
    return 0;
}