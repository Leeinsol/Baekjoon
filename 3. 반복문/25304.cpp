#include <iostream>

using namespace std;

int main() {
	int X, N;
	cin >> X;
	cin >> N;

	int total = 0, cost = 0, num = 0;

	for (int i = 0; i < N; i++) {
		cin >> cost >> num;
		total += (cost*num);
	}

	if (total == X)	cout << "Yes";
	else cout << "No";

	return 0;
}