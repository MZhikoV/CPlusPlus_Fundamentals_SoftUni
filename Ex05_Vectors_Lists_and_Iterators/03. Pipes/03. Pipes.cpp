#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>

using namespace std;

//function to read int input from the console and write it in vector/list
void readInt(vector<int>& inp, stringstream& input) {
    int num;
    while (input >> num) {
        inp.push_back(num);
    }
}

void readStream(vector<int>& inp) {
    string input;
    getline(cin, input);

    stringstream inputS(input);

    readInt(inp, inputS);

}


int main()
{
    string input;
    getline(cin, input);

    int num = stoi(input);

    vector<int> checkup;
    readStream(checkup);

    vector<int> installation;
    readStream(installation);

    vector<int>::iterator inst1 = installation.begin();
    vector<int>::iterator ckp1 = checkup.begin();

    vector<int> lifetimes;

    for (; inst1 != installation.end(), ckp1 != checkup.end(); inst1++, ckp1++) {
       
        int result = (*inst1 / (*inst1 - *ckp1));
        lifetimes.push_back(result);
    }

    for (int c : lifetimes) {
        cout << c << ' ';
    }

    cout << endl;

    return 0;

}

//s 14.30 e 15.15