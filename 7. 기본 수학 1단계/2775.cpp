#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	int num[15][15] = { 0, };

	for (int i = 0; i < 15; i++) {
		num[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			num[i][j] = num[i - 1][j] + num[i][j - 1];
		}
	}

	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k >> n;
		cout << num[k][n] << endl;
	}
	return 0;
}