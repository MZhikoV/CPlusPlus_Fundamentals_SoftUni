#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

bool isValid(vector<char>& input) {

	size_t br0count = 0;
	size_t br1count = 0;
	size_t br2count = 0;

	for (vector<char>::iterator it = input.begin(); it != input.end(); it++) {
		switch (*it) {
		case '{':
			if (br1count || br0count)
				return false;
			br2count++;
			break;

		case '}':
			if (br1count || br0count)
				return false;
			if (br2count == 0)
				return false;
			br2count--;
			break;

		case '[':
			if (br0count)
				return false;
			br1count++;
			break;

		case ']':
			if (br0count)
				return false;
			if (br1count == 0)
				return false;
			br1count--;
			break;

		case '(':
			br0count++;
			break;

		case ')':
			if (br0count == 0)
				return false;
			br0count--;
			break;
		}


	}
	return br2count == 0 && br1count == 0 && br0count == 0;
}

int main()
{
	string strBuf;

	cin >> strBuf;

	vector<char> input;

	input.reserve(strBuf.size());

	for (char c : strBuf) {
		input.push_back(c);
	}

	cout << (isValid(input) ? "valid" : "invalid") << endl;

	return 0;
}