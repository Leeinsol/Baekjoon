#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	cin >> input;

	int count = 0;

	for (int i = 0; i < input.length(); i++) {
		switch (input[i])
		{
		case '=':
			if (input[i - 1] == 'z' && input[i - 2] == 'd') count--;
			else if (input[i - 1] == 'z' || input[i - 1] == 'c' || input[i - 1] == 's') continue;
			else count++;
			break;

		case '-':
			if (!(input[i - 1] == 'c' || input[i - 1] == 'd'))	count++;
			break;

		case 'j':
			if (!(input[i - 1] == 'l' || input[i - 1] == 'n'))	count++;
			break;

		default:
			count++;
			break;
		}
	}

	cout << count;

	return 0;
}
