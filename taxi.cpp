#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v;
	// going to try two pointers
	// sort then have two pointers
	for (int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	int p1 = 0;
	int p2 = v.size()-1;
	int num_c = 0;
	int temp = 0;
	while (p1 <= p2) {
		if (v[p2] == 4) {
			p2--;
			num_c++;
		} else if (v[p1] + v[p2] + temp == 4) {
			p1++;
			p2--;
			num_c++;
			temp = 0;
		} else if (v[p1] + v[p2] + temp > 4){
			p1++;
			p2--;
			num_c += 2;
			temp = v[p1] + v[p2] - 4 ;
		} else if (v[p1] + v[p2] + temp < 4) {
			temp += v[p1] + v[p2];
			p1++;
			p2--;
		}
	}
	
	cout << num_c;

	return 0;
}


