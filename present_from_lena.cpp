#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	// smart way probably is to see a pattern in the location of the matrix
	// and the corresponding number.
	int n;
	cin >> n;
	for (int i=0; i<(2*n+1); i++) {
		bool first = true;
		for (int j=0; j<(2*n+1); j++) {
			int dist  = abs(i-n) + abs(j-n);
			if (dist == 0) {
				cout << n << " ";
			} else if (dist < n) {
				cout << n - dist << " ";
			// second dimension or fourth dimension
			} else if ((i<n && j<=n) || (j<=n && i>n) && dist == n) {
				cout << "0 ";
			} else if (dist == n) {
				cout << "0";
			}else if ((i<n && j<n) || (j<n && i>n)) {
				cout << "  ";
			}
			/*if (dist <= n) {
				if (!first) cout << ' ';
				cout << n - dist;
				first = false;
			}*/
			

		}
		cout << "\n";
	}




	return 0;
}
