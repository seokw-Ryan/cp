#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {

	int n, x;
	cin >> n >> x;

	vector<int> v(n);
	for (int i=0; i<n; i++) {

		int c;
		cin >> c;
		v[i] = c;
	}

	//sort then multiply
	sort(v.begin(), v.end());

	ll count = 0;
	for (int i=0; i<n; i++) {
		int per_hour = x - i;
		if (per_hour < 1) per_hour = 1;
		ll hour = v[i] * ll(per_hour);
		//cout << hour << "\n";
		count += hour;
	}

	cout << count;
	


	return 0;
}
