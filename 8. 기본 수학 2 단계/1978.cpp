#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;

	int result = 0;
	for (int i = 0; i < N; i++) {
		int num, count = 0;
		cin >> num;

		for (int j = 1; j <= num; j++) {
			if (num%j == 0) {
				count++;
			}
		}
		if (count == 2) {
			result++;
		}
		count = 0;
	}
	cout << result;
	return 0;
}
