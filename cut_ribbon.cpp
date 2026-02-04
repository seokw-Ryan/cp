#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n, a, b, c;
	cin >> n >> a >> b >> c;
	// i guess we store the num of ribbon pieces
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());

	vector<int> dp;
	int ans = 0;
	int temp = n;
	for (int i=0; i<3; i++) {
		temp = temp - v[i];
		if (temp >= 0) ans++;
	}
	cout << ans;
	


	return 0;
}
