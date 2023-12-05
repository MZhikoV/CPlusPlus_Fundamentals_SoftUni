#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

   // stringstream inp(input);

    while (input != "end") {
        
        stringstream output;

        for (int i = input.length()-1; i >=0; i--) {
            output<<input[i];
        }
        cout << input << " = " << output.str() << endl;
        getline(cin, input);
    }
    return 0;
}
