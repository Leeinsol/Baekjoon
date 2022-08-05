#include <iostream>
#include <string>

using namespace std;

int main() {

	int N;
	string ox;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> ox;
		int score = 0, total = 0;

		for (int j = 0; j < ox.length(); j++) {
			if (ox[j] == 'O') {
				score++;
				total += score;
			}
			else score = 0;
		}

		cout << total << endl;
	}

	return 0;
}
