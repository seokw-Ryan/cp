#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	for (int i=0; i<n; i++) {
		int val;
		cin >> val;
		v[i] = val;
	}

	// create a new vector that has accounts the energy that is needed to
	// remove the rope
	//vector<int> v_m(m);
	int total = 0;
	for (int i=0; i<m; i++) {
		int x, y;
		cin >> x >> y;
		int bigger = min(v[x-1], v[y-1]);
		//v_m[i] = bigger;

		total += bigger;
	}
	cout << total << "\n";


	return 0;
}
