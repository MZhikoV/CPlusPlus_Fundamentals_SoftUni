#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int sum = 0;

    for (char c : input) {
        if (isdigit(c)) {
            sum += ((int)c -48);
        }
    }

    if (isalpha(sum)) {
        cout << (char)sum << endl;
    }
    else {
        cout << sum << endl;
    }
     
    return 0;
        
        
        
        //sum>65-90 97 122)
}

//s 15.38
//e 15.47