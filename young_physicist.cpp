#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	int x = 0, y = 0, z = 0;
	for (int i=0; i<n; i++) {
		int x1, y1, z1;
		cin >> x1 >> y1 >> z1;
		x += x1;
		y += y1;
		z += z1;
	}

	if (x != 0 || y != 0 || z!= 0) cout << "NO"; else cout << "YES";


	return 0;
}

