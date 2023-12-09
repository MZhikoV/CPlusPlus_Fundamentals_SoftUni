#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

//function to read integer vector/list
double readIntV(vector<int>& v1, int n) {
    int num;
    double avg = 0;
    for (int i=0; i<n;i++) {
        cin >> num;
        avg += num;
        v1.push_back(num);
    }
    return avg / n;
}



int main()
{
    int n;
    cin >> n;


    vector <int> inpV; //declaring a vector;
    
    double avg=readIntV(inpV,n);

    vector <int> result; //declaring a vector;

    vector <int> ::iterator it1;

    for (it1 = inpV.begin(); it1 != inpV.end(); it1++) {
        if (*it1 < avg) {
            result.push_back(*it1);
        }
    }
    if (result.empty()) {
        cout << "No";
    }
    else {
        vector <int> fresult; //declaring a vector;
        sort(result.begin(), result.end());
        reverse(result.begin(), result.end());

        int idx = 0, count=0;
        for (it1 = result.begin(); it1 != result.end();idx++, it1++) {
            if (*it1%2==0) {
                cout << *it1 << ' ';
                count++;
            }
        }
        if (count == 0) {
            cout << "No";
        }
    }
    cout << endl;
    return 0;
}


//s 6.55 e 7.40