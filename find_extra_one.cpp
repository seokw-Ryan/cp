#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int count_pos = 0, count_neg = 0;
	for (int i=0; i<n; i++) {
		int x, y;
		cin >> x >> y;
		if (x > 0) count_pos++; 
		if (x < 0) count_neg++;
	}	

	if (count_pos == 1 || count_neg == 1 || (count_pos == 0 && count_neg >
		0) || (count_pos > 0 && count_neg == 0)) cout << "Yes";
	else cout << "No";

	return 0;
}
