#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	int num[1000001];

	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	sort(num, num + N);

	cout << num[0] << " " << num[N - 1];
	return 0;
}
