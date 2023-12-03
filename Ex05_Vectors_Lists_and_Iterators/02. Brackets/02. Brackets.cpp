#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <vector>

using namespace std;

void checkBrackets(vector<char> &inp, char a, char b) {
    
    vector<char>::iterator itC = inp.begin();

    for (; itC != inp.end() - 1; ) {
        if ((*itC == a) && (*(itC + 1) == b)) {
           /* itC =*/ inp.erase(itC, itC + 2);
           if (inp.empty()) {
               break;
           }
            itC = inp.begin();
        }
        else {
            itC++;
        }
    }
}


bool checkSupr(vector<char>& inp, char a) {
    vector<char>::iterator itC = inp.begin();

    for (; itC != inp.end() - 1; ) {
        if ((*itC == a) && (*(itC + 1) > a)) {
            return false;
        }
        else {
            itC++;
        }
    }
    return true;
}

void errorMsg(bool type) {
    if (type) {
        cout << "valid";
    }
    else {
        cout << "invalid";
    }
    cout << endl;
}

int main()
{
    string input;
    getline(cin, input);

    stringstream inpS(input);

    vector <char> seq1;

    char c;
    while (inpS >> c) {
        seq1.push_back(c);
    }


    checkBrackets(seq1, '(', ')');
    if (!checkSupr(seq1, '(')) {
        errorMsg(false);
        return 1;
    }
    checkBrackets(seq1, '[', ']');
    if (!checkSupr(seq1, '[')) {
        errorMsg(false);
        return 1;
    }
    checkBrackets(seq1, '{', '}');
    if (!seq1.empty()) {
        errorMsg(false);

        
        for (char c : seq1)
        {
            cout << c;
        }

        return 1;
    }
    else {
        errorMsg(true);
    }

    return 0;

}


//s 9.55

