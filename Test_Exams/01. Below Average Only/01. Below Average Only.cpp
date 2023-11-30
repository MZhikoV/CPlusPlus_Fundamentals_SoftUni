#include <iostream>

using namespace std;

const int MAXNUM = 99;

void readArray(int* arr1, int indx) {
    for (int i = 0; i < indx; i++) {
        cin >> arr1[i];
    }
}

double averageNumInArray(int* arr1, int indx) {
    int sum = 0;
    for (int i = 0; i < indx; i++) {
        sum += arr1[i];
    }
    return (sum / indx);
}

int main()
{
    int arrI [MAXNUM] = {};

    int num;
    cin >> num;

    readArray(arrI, num);

    double avg = averageNumInArray(arrI, num);

    int resultA [MAXNUM] = {};

    int indx = 0;

    for (int i = 0; i < num; i++) {
        if (arrI[i] <= avg) {
            resultA[indx] = arrI[i];
            indx++;
        }
    }

    int sumE = 0, sumO = 0;

    for (int j = 0; j < indx; j++) {
        if (j %2== 0) {
            sumE += resultA[j];
        }
        else {
            sumO += resultA[j];
        }
    }

    cout << sumE * sumO << endl;

    return 0;
}

//s 15.23
//e 15.37