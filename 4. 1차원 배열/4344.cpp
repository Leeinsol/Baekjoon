#include <iostream>
#include <algorithm>

using namespace std;

void AverageStudent() {
	int student;
	cin >> student;

	int *score = new int[student];
	double aver = 0, count = 0;

	for (int i = 0; i < student; i++) {
		cin >> score[i];
	}

	for (int i = 0; i < student; i++) {
		aver += score[i];
	}
	aver /= student;

	for (int i = 0; i < student; i++) {
		if (score[i] > aver) {
			count++;
		}
	}

	cout.precision(3);
	cout << fixed;
	cout << count / student * 100 << "%\n";

	delete[] score;
}

int main() {

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		AverageStudent();
	}

	return 0;
}
