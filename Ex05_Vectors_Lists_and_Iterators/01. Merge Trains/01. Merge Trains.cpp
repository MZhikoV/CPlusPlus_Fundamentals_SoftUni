#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <vector>

using namespace std;

//function from getting an integer from console to vector/list
void readInt(stringstream& inp, vector<int>& inpV) {
    int i;
    while (inp >> i) {
        inpV.push_back(i);
    }
}

//function for reading lines to stream
void readStream(vector<int>& inpV) {
    string input;
    getline(cin, input);
    stringstream inp(input);
    readInt(inp, inpV);
}

int main()
{
    vector<int> trainA;
    vector<int> trainB;

    readStream(trainA);
    readStream(trainB);

    /*int maxSize = 0;
    if (trainA.size() >= trainB.size()) {
        maxSize = trainA.size();
    }
    else{
        maxSize = trainB.size();
    }*/

    vector<int>::iterator itA = trainA.end()-1;
    vector<int>::iterator itB = trainB.end()-1;

    vector<int> result;
    vector<char> resT;
    bool finA = false;

    for (; itA >= trainA.begin() && itB >= trainB.begin(); ) {
        if (*itA > *itB) {
            result.insert(result.begin(), *itB);
            resT.push_back(66);
            if (itB == trainB.begin()) {
                break;
            }
            else {
                itB--;
            }
        }
        else {
            result.insert(result.begin(), *itA);
            resT.push_back(65);
            if (itA == trainA.begin()) {
                finA = true;
                break;
            }
            else {
                itA--;
            }
        }
    }

    if (finA) {
        for (; itB >= trainB.begin();) {
            result.insert(result.begin(), *itB);
            resT.insert(resT.begin(), 66);
            if (itB == trainB.begin()) {
                break;
            }
            else {
                itB--;
            }
        }
    }
    else {
        for (; itA >= trainA.begin(); ) {
            result.insert(result.begin(), *itA);
            resT.insert(resT.begin(), 65);
            if (itA == trainA.begin()) {
                break;
            }
            else {
                itA--;
            }
        }
    }


    

    for (char c : resT) {
        cout << c;
    }

    cout << endl;

    for (int n : result) {
        cout << n << ' ';
    }

    cout << endl;

    return 0;
}

//s 07.11