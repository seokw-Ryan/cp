#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	vector<ll> v;
	for (int i=0; i<n; i++) {
		ll x; cin >> x;
		v.push_back(x);
	}
	int q;
	cin >> q;
	vector<ll> ans;
	for (int i=0; i<q; i++) {
		ll m; cin >> m;
		// each day
		ll count = 0;
		for (int j=0; j<n; j++) {
			if (v[j] <= m) count ++;
		}
		ans.push_back(count);


	}

	for (int i=0; i<q; i++) {
		cout << ans[i] << "\n";
	}


	return 0;
}
