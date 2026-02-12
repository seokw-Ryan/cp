#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		int temp; cin >> temp;
		// w1 and w2
		// give the candy to the lesser oen
		int w1 = 0, w2 = 0;
		vector<int> v;
		for (int j=0; j<temp; j++) {
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.rbegin(), v.rend());
		for (int j=0; j<temp; j++) {
			if (w1 >= w2) w2 += v[j];
			else w1 += v[j];
		}
	
		// 3%2 => 1
		// so the main point here is the weight.
		// there is no 3 allowed. 
		// in other words, when the sum is odd its not possible. when
		// the sum is even, we need to check if it can be divided by
		// two.
		// can there be a case where sum is even and the temp is odd and
		// it works
		// 1 2 1 2 
		// weight 6 temp = 3
		// weight = 6, temp = 3
		// 2 2 2 is not fine
		// weight = 6, temp = 3
		if (w1 == w2) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
