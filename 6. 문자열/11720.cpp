#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	char *number = new char[N];
	cin >> number;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += number[i] - 48;
	}

	cout << sum;

	return 0;
}
