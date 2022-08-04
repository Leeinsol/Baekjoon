#include <iostream>

using namespace std;

int main() {

	int num, A, B;
	cin >> num;

	for (int i = 1; i < num + 1; i++) {
		cin >> A >> B;
		cout << "Case #" << i << ": " << A + B << endl;
	}

	return 0;
}
