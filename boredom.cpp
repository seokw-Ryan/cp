#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	
	int big_num = 100001;
	int mx = 0;
	vector<ll> count(big_num, 0);
	for (int i=0; i<n; i++) {
		int temp; cin >> temp;
		count[temp]++;
		mx = max(temp, mx);
	}

	// each dp value = max value until dp[i]
	// which means that dp[1] = count
	// dual for loop?
	// can only look at ak-1 by going from low to high 

	
	vector<ll> dp(mx+1, 0);
	// does dp[0] matter here?
	dp[1] = count[1]; // 0 and 2 eliminted (0 dne) 
	int ans = 0;
	for (int i=2; i<mx+1; i++) {
		// dp[2] have 1 and 3 eliminated
		// dp[2] = dp[0] + count[2]*2
		// dp[3] have 2 and 4 eliminated
		// dp[3] = dp[1] + count[3]*3
		// dont care about above 
		//should include all the past values except i-1
		// 
		dp[i] = max(dp[i-1], dp[i-2] + count[i]*i*1LL);	
		//cout << "dp[" << i << "]: " << dp[i] << "\n";

	}
	//missing an edge case
	cout <<  dp[mx]; 


	return 0;
}
