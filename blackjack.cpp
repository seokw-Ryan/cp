#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;
	// find how many num of ways to get the second card in the way if the
	// first card is the queen of spades
	int needed = n - 10;
	
	// if 10 is needed then we take 1 off since queen of spades already
	// taken
	int ans;
	if (n == 20) {
		ans = 15;
	} else if (n <= 10 || n > 21) {
		ans = 0;
	} else {
		ans = 4;
	}
	cout << ans << "\n";

	return 0;

}
