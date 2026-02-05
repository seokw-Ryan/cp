#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	vector<int> dp(n,0);
	vector<int> v;
	// num of points as dp[x]
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	for( int i=0; i<n; i++) {
		dp[v[i]] += v[i];
	}
	auto it = max_element(dp.begin(), dp.end());
	cout << *it;
	


	return 0;
}
