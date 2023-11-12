#include <iostream>
#include <cmath>

using namespace std;

int evenNum(int a, string b);

int main()
{
    int num;
    cin >> num;
    num = abs(num);
    int summOdd = evenNum(num, "odd");
    int summEven = evenNum(num, "even");

    int result = summOdd * summEven;

    cout << result << endl;

    return 0;
}

int evenNum(int a, string b) {
    int sum = 0;
    int currNum = 0;
        while (a > 0) {
            currNum = a % 10;
            a /= 10;
            if (b == "even") {
                if (currNum % 2 == 0) {
                    sum += currNum;
                }
            }
            else if (b == "odd") {
                if (currNum % 2 != 0) {
                    sum += currNum;
                }
            }
        }
        return sum;
}