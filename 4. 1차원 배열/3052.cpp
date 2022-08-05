#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int array[10];
	int check[42] = {};
	int count = 0;

	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;
		array[i] = input % 42;
	}


	for (int i = 0; i < 10; i++) {
		if (check[array[i]] == 0) {
			count++;
			check[array[i]] = 1;
		}
	}

	cout << count;

	return 0;
}
