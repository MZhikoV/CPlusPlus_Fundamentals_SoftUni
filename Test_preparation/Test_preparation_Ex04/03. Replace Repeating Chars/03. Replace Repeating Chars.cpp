#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    stringstream result;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] != input[i+1]) {
            result << input[i];
        }
    }
    cout << result.str() << endl;
    return 0;
}
