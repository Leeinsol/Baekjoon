#include <iostream>

using namespace std;

int main() {
	int input, num;
	cin >> input;
	num = input;

	int count = 0, sum = 0, result = 0;

	while (num > 0)
	{
		num -= count;
		count++;
	}

	for (int i = count - 2; i > 0; i--) {
		sum += i;
	}

	if (count == 2) {
		cout << input << "/" << input;
	}
	else if (count % 2 == 0) {
		result = input - sum;
		cout << count - result << "/" << result;
	}
	else {
		result = input - sum;
		cout << result << "/" << count - result;
	}

	return 0;
}