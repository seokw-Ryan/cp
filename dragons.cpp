#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int s, n;
	cin >> s >> n;
	vector<pair<int, int>> v;
	bool can_w = true;
	for (int i=0; i<n; i++) {
		int x1, x2;
		cin >> x1 >> x2;
		v.push_back({x1, x2});
	}
	// problem is here. Is this the right way to sort v?
	sort(v.begin(), v.end());
	
	for (int i=0; i<n; i++) {
		if (v[i].first < s) {
			s += v[i].second;
		} else {
			can_w = false;
			break;
		}
	}

	if (can_w) cout << "YES"; else cout << "NO";






	return 0;
}
