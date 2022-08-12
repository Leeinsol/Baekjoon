#include <iostream>

using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;

	int move = A - B;
	int total = 0, day = 0;

	if ((V - B) % (A - B) != 0) {
		cout << (V - B) / (A - B) + 1;
	}
	else {
		cout << (V - B) / (A - B);
	}

	return 0;
}