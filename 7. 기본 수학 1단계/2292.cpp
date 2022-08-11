#include <iostream>

using namespace std;

int main() {
	int num, count = 1;
	cin >> num;

	num--;

	while (num > 0)
	{
		num -= 6 * count;
		count++;
	}
	cout << count;
	return 0;
}