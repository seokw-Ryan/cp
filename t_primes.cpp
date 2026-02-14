#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		// logic to check if it is t prime
		int x; cin >> x;
		bool b = false;
		// Every number have two. So it's important to find a number
		int half = x/2;
		for (int j=2; j<=half; j++) {
			if (j*j > x) break;
			else if (j*j == x) {
				b = true;
				break;
			}
		}
		if (b == true) cout << "YES" << "\n";
		else cout << "NO" << "\n";


	}



	return 0;


}
