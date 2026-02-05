#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int neg = INT_MIN;
	vector<int> dp(n+1, neg);
	int ans;
	// think about creating a vector where we are having the length of the
	// ribbon as dp[i] val
	// x as dp[0] = 
	dp[0] = 0;
	for (int i=0; i<=n; i++) {
		if (i-a >= 0) dp[i] = max(dp[i-a]+1, dp[i]);
		if (i-b >= 0) dp[i] = max(dp[i-b]+1, dp[i]);
		if (i-c >= 0) dp[i] = max(dp[i-c]+1, dp[i]);
	}
	cout << dp[n];



	return 0;
}
