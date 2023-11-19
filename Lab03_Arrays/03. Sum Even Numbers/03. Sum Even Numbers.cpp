#include <iostream>

using namespace std;

const int MAXNUM = 99;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    int arrN[MAXNUM] = {};

    for (int i = 0; i < n; i++) {
        cin >> arrN[i];
    }
    for (int number : arrN) {
        if ((number % 2) == 0) {
            sum += number;
        }
    }

    /*for (int i = 0; i < n; i++) {
        if (arrN[i] % 2 == 0) {
            sum += arrN[i];
        }
    }*/
    cout << sum << endl;

    return 0;
}

//int main()
//{
//    int n;
//    cin >> n;
//    int sum = 0;
//
//    int arrN[MAXNUM];
//
//    for (int i = 0; i < n; i++) {
//        cin >> arrN[i];
//        if (arrN[i] % 2 == 0) {
//            sum += arrN[i];
//        }
//    }
//    
//    cout << sum << endl;
//
//    return 0;
//}