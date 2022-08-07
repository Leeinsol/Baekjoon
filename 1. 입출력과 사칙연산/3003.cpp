#include <iostream>

using namespace std;

int main() {
	int chess[6] = { 1,1,2,2,2,8 };

	int king, queen, rook, bishop, knight, pawn;
	cin >> king >> queen >> rook >> bishop >> knight >> pawn;

	cout << chess[0] - king << " " << chess[1] - queen << " " << chess[2] - rook << " " << chess[3] - bishop << " " << chess[4] - knight << " " << chess[5] - pawn;

	return 0;
}