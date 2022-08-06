#include <iostream>

using namespace std;

int d(int num) {
	int sum = num;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
	bool a[10001] = { false };

	for (int i = 0; i < 10001; i++) {
		int n = d(i);
		if (n < 10001) {
			a[n] = true;
		}
	}

	for (int i = 0; i < 10001; i++) {
		if (!a[i]) {
			cout << i << endl;
		}
	}

	return 0;
}