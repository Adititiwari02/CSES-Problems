#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

int cnt = 0;
bool ifSafe(vector<string>& board, int row, int col) {
	int x = row - 1, y = col - 1;
	while (x >= 0 && y >= 0) {
		if (board[x][y] == 'Q') return false;
		x--;
		y--;
	}
	x = row - 1, y = col;
	while (x >= 0) {
		if (board[x][y] == 'Q') return false;
		x--;
	}
	x = row - 1, y = col + 1;
	while (x >= 0 && y < 8) {
		if (board[x][y] == 'Q') return false;
		x--; y++;
	}
	return true;
}
void NoOfWaysToPlaceQueens(vector<string>& board, int queensPlaced) {
	if (queensPlaced >= 8) {
		cnt++;
		return;
	}
	for (int i = 0; i < 8; i++) {
		if (board[queensPlaced][i] != '*' && ifSafe(board, queensPlaced, i)) {
			board[queensPlaced][i] = 'Q';
			NoOfWaysToPlaceQueens(board, queensPlaced + 1);
			board[queensPlaced][i] = '.';
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<string> givenBoard;
	rep(i, 0, 8) {
		string s;
		cin >> s;
		givenBoard.push_back(s);
	}
	NoOfWaysToPlaceQueens(givenBoard, 0);
	cout << cnt << endl;
	return 0;
}