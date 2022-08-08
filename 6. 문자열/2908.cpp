#include <iostream>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	int hun = A / 100;
	int ten = (A / 10) % 10;
	int one = A % 10;

	A = one * 100 + ten * 10 + hun;

	hun = B / 100;
	ten = (B / 10) % 10;
	one = B % 10;

	B = one * 100 + ten * 10 + hun;

	if (A > B)	cout << A;
	else cout << B;

	return 0;
}
