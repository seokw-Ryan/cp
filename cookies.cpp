#include <bits/stdc++.h>
using namespace std;


int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	int count = 0;
	for (int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		if (temp%2 == 1) count++; 
		v.push_back(temp);
	}
	
	int ans;
	if (count%2 == 1) {
		ans = count;
	} else {
		ans = n - count;
	}
	cout << ans;
	return 0;
}
