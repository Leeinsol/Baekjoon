#include <iostream>

using namespace std;

int func(int num) {
	int count = 99;

	if (num < 100) {
		return num;
	}
	else {
		for (int i = 100; i <= num; i++) {
			int hun = i / 100;
			int ten = (i / 10) % 10;
			int one = i % 10;

			if ((hun - ten) == (ten - one)) {
				count++;
			}
		}
	}
	return count;
}


int main() {
	int N;
	cin >> N;

	cout << func(N);

	return 0;
}
