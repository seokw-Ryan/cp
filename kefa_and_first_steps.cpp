#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	// dp?
	vector<int> v;
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		
		v.push_back(x);
	}
	
	int count = 1;
	int longest = 1;
	for (int i=0; i<n-1; i++) {
		if (v[i] <= v[i+1]) {
			count++;
		} else {
			count = 1;
		}
		if (count > longest) {
			longest = count; 
		}
		//cout << "current: " << v[i] << "\n";

		//cout << "count: " << count << "\n";
	}
	cout << longest;



	return 0;
}
