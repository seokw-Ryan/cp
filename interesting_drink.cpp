#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	vector<int> v;
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int q;
	cin >> q;
	for (int i=0; i<q; i++) {
		ll num_c; cin >> num_c;
		/*for (int j=0; j<n; j++) {
			ll beer_c = (ll)v[j];
			if (num_c >= beer_c) {
				//num_c -= beer_c;
				num_s++;
			} else {
				break;
			}
		}*/
		// it is not so good that i kinda remember the solution
		// so basically search for the position of the greatest number
		// that is less than num_c
		// and the implementation here needs definite improvement
		auto it = upper_bound(v.begin(), v.end(), num_c);
		int num_s = distance(v.begin(), it);

		//output each loop
		cout << num_s << "\n";
	}


	return 0;
}
