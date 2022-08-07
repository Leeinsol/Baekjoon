#include <iostream>
#include <string>

using namespace std;

int main() {
	int num;
	string input;

	cin >> num;
	int count = num;

	for (int i = 0; i < num; i++) {
		cin >> input;
		bool alphabet[26] = { false, };
		alphabet[(int)input[0] - 97] = true;

		for (int j = 1; j < input.size(); j++) {
			if (input[j] == input[j - 1])	continue;
			else if (input[j] != input[j - 1] && alphabet[(int)input[j] - 97]) {
				count--;
				break;
			}
			else	alphabet[(int)input[j] - 97] = true;
		}
	}

	cout << count;

	return 0;
}
