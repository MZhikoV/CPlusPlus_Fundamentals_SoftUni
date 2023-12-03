#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <climits>

using namespace std;

//create function that transforms military time format ot minutes
void milToMin(vector<int>& inpV, vector<int>& outpV) {
    vector<int>::iterator it1;
    for (it1 = inpV.begin(); it1 != inpV.end(); it1++) {

        int min = *it1 % 100;
        int time = (*it1 / 100) * 60 + min;

        outpV.push_back(time);
    }
}

//function from getting an integer from console to vector/list
void readInt(stringstream& inp, vector<int>& inpV) {
    int i;
    while (inp >> i) {
        inpV.push_back(i);
    }
}


int main()
{
    string input;
    getline(cin, input);

    int n = stoi(input);

    vector<int> busT;
    busT.reserve(20);

    getline(cin, input);
    stringstream inpS(input);

    readInt(inpS, busT);

    getline(cin, input);

    int trainT = stoi(input);
    int min = trainT % 100;
    trainT = (trainT / 100) * 60 + min; //train time in minutes

    vector<int> busTMin;

    milToMin(busT, busTMin);

    vector<int>::iterator it1;

    int minT = INT_MAX;
    int indx = 0;
    int minI = 0;

    for (it1 = busTMin.begin(); it1 != busTMin.end(); it1++) {
        int diff = trainT - *it1;
        indx++;
        if (minT > diff && diff >= 0) {
            minT = diff;
            minI = indx;
        }
    }


    cout << minI << endl;

    return 0;
}