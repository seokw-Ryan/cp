#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	vector<int> v;
	int total_s = 0;
	for(int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		total_s += temp;
	}

	// sort
	sort(v.begin(), v.end(), greater<int>());
	
	double curr_val = 0;
	int min_c = 0;
	double half_v = total_s/2;
	//cout << "half_v: " <<  half_v << "\n";
	for (int i=0; i<n; i++) {
		curr_val += double(v[i]);
		min_c++;
	
		if (curr_val > half_v) break;

		//cout << "curr_val: " << curr_val << "\n";
		//cout << "i: " << i << "\n";
	}
	cout << min_c << "\n";




	return 0;
}
