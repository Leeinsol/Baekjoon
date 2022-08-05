#include <iostream>

using namespace std;

int main() {
	int num[9];
	int max = num[0];

	int index;

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < 9; i++) {
		if (max < num[i]) {
			max = num[i];
			index = i;
		}
	}

	cout << max << endl;
	cout << index + 1 << endl;
	return 0;
}
