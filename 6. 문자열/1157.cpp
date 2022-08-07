#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	cin >> S;

	int alphabet[26] = { 0, };
	int max = 0, index = 0, count = 0;

	for (int i = 0; i < S.length(); i++) {
		if (S[i] < 97)	alphabet[S[i] - 65]++;
		else alphabet[S[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (max < alphabet[i]) {
			max = alphabet[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == alphabet[i]) {
			count++;
			if (count > 1) {
				cout << "?";
				return 0;
			}
		}
	}

	cout << (char)(index + 65);

	return 0;
}
