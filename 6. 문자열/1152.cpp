#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	getline(cin, input);

	int count = 1;

	for (int i = 1; i < input.length() - 1; i++) {
		if (input[i] == ' ') {
			count++;
		}
	}

	if (input.length() == 1) {
		if (input[0] == ' ') {
			cout << "0";
			return 0;
		}
	}

	cout << count;

	return 0;
}
