#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n, k;
	cin >> n >> k;
	// k is the width of the piano
	// k consecutive planks where sum of the heights is the minimum
	// 
	// dp = mininum value up until 
	vector<int> dp;
	ll big_n = 1000000000;
	vector<int> v;
	// need to do something here in the first for loop
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		v.push_back(x);

	}
	int index = 0;	
	// each dp[i] should have the min val
	// what should i be? 
	// what are we traversing?
	// 
	dp[n] = 0;
	for (int i=n-1; i>=n-k; i--) {
		dp[n] += v[i];
	}
	//dp[n] = v[n-2] + v[n-1] + v[n];
	//dp[n-1] = min(dp[n], dp[n] - v[n] + v[n-k+1];
	int ans = 0;
	for (int i=n-1; i>0; i++) {
		//dp[2] = dp
		dp[i] = v[i] + v[i-1] - v[i+k-1];
		if (dp[i] < dp[i+1]) ans = i;
	}
	cout << ans;
	/*
	int i = 0;
	int index = 0;
	int val_m = INT_MAX; //minimum val
	while (i < n-k) {
		int temp = 0;	
		// i=1 then 1+3 = 4 
		// 1 2 3 4 
		for (int j=i; j<i+k; j++) temp += v[j];
		if (temp < val_m) { 
			val_m = temp;
			index = i;
		}
		i++;
	}
	*/
	cout << index+1;
		


	return 0;
}
