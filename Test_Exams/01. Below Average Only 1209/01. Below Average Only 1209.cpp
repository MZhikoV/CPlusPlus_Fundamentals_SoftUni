#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> inpV;

    int a, avg = 0, sum = 0;;

    for (int i = 0; i < n; i++) {
        cin >> a;
        inpV.push_back(a);
        sum += a;
    }

    avg = sum / n;

    vector<int>::iterator it1;

    vector<int> resV;

    for (it1 = inpV.begin(); it1 != inpV.end(); it1++) {
        if (*it1 <= avg) {
            resV.push_back(*it1);
        }
    }

    int from = 0, to = resV.size();
    int idx = 0, sumE=0, sumO=0;

    for (from; from<to; from++) {
        if (from%2==0) {
            sumE += resV[from];
        }
        else {
            sumO += resV[from];
        }
    }

    cout << sumE * sumO << endl;

    return 0;
}


//s 13.38 e 13.48
