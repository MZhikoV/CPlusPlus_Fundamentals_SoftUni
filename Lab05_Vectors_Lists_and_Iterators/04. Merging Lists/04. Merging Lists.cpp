#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

//function for writing the values to a list/vector
void vectorReadInd(stringstream& str1, list<int>& inp1) {
    int i;
    while (str1 >> i) {
        inp1.push_back(i);
    }
}

//function for reading values from the console
void readConsoleInput(list<int>& inpV) {
    string input;
    getline(cin, input);
    stringstream infostr(input);
    vectorReadInd(infostr, inpV);
}

//function for combining two seqences (vectors,lists)
list<int> combineSeq(list<int>& inp1, list<int>& inp2) {
    list<int>::const_iterator
        it1 = inp1.cbegin(),
        it2 = inp2.cbegin();

    list <int> result;

    for (; it1 != inp1.cend() && it2 != inp2.cend(); it1++, it2++) {
        result.push_back(*it1);
        result.push_back(*it2);
    }
    
    //check is seqence 1 is over
    for (; it1 != inp1.cend(); it1++) {
        result.push_back(*it1);
    }

    //check is seqence 2 is over
    for (; it2 != inp2.cend(); it2++) {
        result.push_back(*it2);
    }

    return result;
}


int main()
{
    //declaring the two vectors
    list <int> inpV1;
    list <int> inpV2;

    //write data to first and second vector
    readConsoleInput(inpV1);
    readConsoleInput(inpV2);

    list<int> result = combineSeq(inpV1, inpV2);

    //write the result on the console
    for (int i : result) {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}



//s 12.52