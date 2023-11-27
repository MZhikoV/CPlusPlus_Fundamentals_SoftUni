#include <iostream>
#include <sstream>

using namespace std;

void reverseS(const string& str1, ostream& str2) {
	size_t indx = str1.length()-1;

	for (;;) {
		str2 << str1[indx];

		if (indx) {
			indx--;
		}
		else {
			break;
		}
	}
}

int main() {
	ostringstream resS;

	while (true) {
		string input;
		cin >> input;

		if (input == "end") {
			break;
		}
		resS << input << " = ";
		reverseS(input, resS);
		resS << endl;
	}

	cout << resS.str();

	return 0;
}













//void revPrint(string strA) {
//    cout << strA << " = ";
//    for (int i = strA.length() - 1; i >= 0; i--) {
//        cout << strA[i];
//    }
//    cout << endl;
//}
//
//int main()
//{
//    string input;
//    cin >> input;
//
//    while (input != "end") {
//        revPrint(input);
//        cin >> input;
//    }
//
//    return 0;
//}
