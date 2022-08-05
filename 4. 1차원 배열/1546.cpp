#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int N;
	double score[1001], maxScore, total = 0;
	cin >> N;

	cout.precision(9);
	cout << fixed;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}

	maxScore = *max_element(score, score + N);

	for (int i = 0; i < N; i++) {
		total += score[i] / maxScore * 100;
	}

	cout << total / N;

	return 0;
}
