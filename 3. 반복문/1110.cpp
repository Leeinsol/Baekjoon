#include <iostream>

using namespace std;

int main() {

	int A, result, cycle = 0;
	cin >> A;
	result = A;

	while (1) {
		result = (result % 10) * 10 + (result % 10 + result / 10) % 10;
		cycle++;
		if (A == result) break;
	}
	cout << cycle;
	return 0;
}
