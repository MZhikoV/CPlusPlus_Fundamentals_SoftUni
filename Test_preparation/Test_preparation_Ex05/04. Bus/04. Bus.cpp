#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <climits>

using namespace std;

//function to read integer vector/list
void readIntV(vector<int>& v1, int n) {
    int a, min, hour, temp;
    for (int i = 0; i < n; i++) {
        cin >> a;
        min = a % 100;
        hour = (a / 100) * 60;
        temp = min + hour;
        v1.push_back(temp);
    }
}

//function to print integer vector/list
void printIntV(vector<int>& v1) {
    for (int num : v1) {
        cout << num << ' ';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    
    vector <int> timeB; //declaring a vector;
    readIntV(timeB,n);

    int a, mins, hour, timeT;
        cin >> a;
        mins = a % 100;
        hour = (a / 100) * 60;
        timeT = mins + hour;

        vector<int>::iterator it1;

        int bus, idx = 1, min = INT_MAX;

        for (it1 = timeB.begin(); it1 != timeB.end(); it1++) {
            int check = timeT - *it1;
            if (check < min) {
                min = check;
                bus = idx;
                idx++;
            }
            else {
                idx++;
            }
        }

        cout << bus << endl;

    return 0;
}