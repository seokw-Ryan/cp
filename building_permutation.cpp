#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {

	int n;
	cin >> n;

	// create a vector for the ideal permutation
	vector<int> v(n);
	for (int i=0; i<n; i++) {
		v[i]= i+1;
	}

	//sort the given input
	vector<ll> input(n);
	for (int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		input[i] = temp;
	}
	sort(input.begin(), input.end());

	// Go through each index and calculate the difference between the input
	// and the ideal permutation and record the difference in variable count
	ll count = 0;
	for (int i=0; i<n; i++) {
		count += llabs(v[i]-input[i]);
	}
	cout << count << "\n";
		


	return 0;
}
