#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	// Calculate the current index and subtract from (3,3)
	// Row
	//int countR=0, countC=0;
	int row, col;
	for (int i=0; i<5; i++){
		
		for (int j=0; j<5; j++){
			int n;
			cin >> n;
			if (n == 1) {
				row = i+1;
				col = j+1;
			}
		}
	}

	//(2,5) - (3,3) 
	// 2-3 = 1, 5-3 = 2, 1+2 = 3
	int cr = abs(row - 3);
	int cc = abs(col -3);
	int ans = cr + cc;
	cout << ans;
	return 0;
}
