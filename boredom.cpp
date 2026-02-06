#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	vector<int> v;
	vector<int> dp(n, 0);
	for (int i=0; i< ; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	
	// think about what needs to be stored
	// index vs. value
	// i dont think we are removing any elements here because that will take
	// too long
	// the value should be max number of points
	// dp[i] = max(dp[i], 
	// but what should "i" be?
	// the question is how should this second for loop be navigatedf
	// i guess we only look ak-1 part because in the end we wont need to
	// look at ak+1
	// which means that we go through each and every element
	for (int i=0; i<n; i++) {
		// whats the best way to go and store the element?
		// i and i-2
		if (dp[i] = max(d

		


		return 0;
	}


	return 0;
}
