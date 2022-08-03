#include <iostream>

using namespace std;

int main() {

	int num, total = 0;
	cin >> num;

	for (int i = 1; i < num + 1; i++) {
		total += i;
	}

	cout << total;

	return 0;
}
