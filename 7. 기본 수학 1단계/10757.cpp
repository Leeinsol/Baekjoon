#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, res;
	cin >> A >> B;
	
	int size1 = A.size();
	int size2 = B.size();

	int up = 0;

	while (size1 > 0 || size2 > 0) {
		int A1 = 0, B1 = 0;
		if (size1 > 0) {
			A1 = A[--size1] - '0';
		}
		if (size2 > 0) {
			B1 = B[--size2] - '0';
		}

		int cur = A1 + B1 + up;
		up = cur / 10;
		cur %= 10;
		char c = cur + '0';
		res += c;
	}

	if (up > 0) {
		res += up + '0';
	}
	for (int i = res.length() - 1; i >=0; i--) {
		cout << res[i];
	}

	return 0;
}