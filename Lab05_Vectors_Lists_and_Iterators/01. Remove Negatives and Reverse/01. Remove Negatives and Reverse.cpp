#include <iostream>
#include <vector>
#include<string>
#include<sstream>


using namespace std;

void readIntsVector(istream& inpstr, vector<int> &inpints) {
    int i;
    while (inpstr >> i) {
        inpints.push_back(i);
    }
}



//void printVector(const vector<double>& inp) {
//    for (double num : inp)
//    {
//        cout << num << ' ';
//    }
//    cout << endl;
//}

int main()
{
    string inputS;
    getline(cin, inputS);

    istringstream inputStream(inputS);

    vector<int> resultV;

    readIntsVector(inputStream, resultV);

    vector<int>::iterator chkV;

    for (chkV = resultV.begin(); chkV != resultV.end();) {
        if (*chkV < 0) {
            chkV = resultV.erase(chkV);
        }
        else {
            chkV++;
        }
    }

    if (resultV.size()) {
        for (chkV = resultV.end() - 1;; chkV--) {
            cout << *chkV << ' ';
            if (chkV == resultV.begin()) {
                break;
            }
        }
    }
    else {
        cout << "empty";
    }

    cout << endl;

    return 0;
}