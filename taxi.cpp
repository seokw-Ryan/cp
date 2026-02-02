#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	int c1=0, c2=0, c3=0, c4=0;
	for (int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		if (temp == 1) c1++;
		else if (temp == 2) c2++;
		else if (temp == 3) c3++;
		else c4++;
	}

	//start from 4 then to 1
	int ans = 0;
	//add all of 4
	ans += c4;
	// add all of 3
	// subtract num of 3 from num of 1 since all the 1 can fit in with 3.
	ans += c3;
	if (c1 > c3) c1 -= c3;
	else c1 = 0;
	// add half of 2 since we only need one car for two 2.	
	ans += c2/2;
	if (c2%2 == 1) {
		if (c1 >= 2) c1 -= 2;
		else if (c1 == 1) c1 -=1;
		ans++;
	}
	// add remaining 1
	if (c1 > 0) ans += ceil(c1/4.0) ;
	cout << ans;
	



	return 0;
}
