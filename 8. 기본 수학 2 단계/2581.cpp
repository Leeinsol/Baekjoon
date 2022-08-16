#include <iostream>
#include <string>
using namespace std;

int main() {
	int M, N;
	cin >> M >> N;
	
	int result = 0;
	int min = -1;

	for (int i = M; i <= N; i++) {
		int count = 0;

		for (int j = 1; j <= i; j++) {
			if (i%j == 0) {
				count++;
			}
		}
		if (count == 2) {
			if (min == -1)	min = i;
			result += i;
		}
		count = 0;
	}
	if (min == -1)	cout << min;
	else {
		cout << result << endl;
		cout << min << endl;
	}
	return 0;
}