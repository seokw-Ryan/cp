#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n, p_x;
	cin >> n;
	cin >> p_x;
	vector<int> level;
	int curr_l = 1;
	for (int i=0; i<p_x; i++) {
		int temp;
		cin >> temp;
		if (temp == curr_l) curr_l++;
	
	}
	int p_y;
	cin >> p_y;
	for(int i=0; i<p_y; i++) {
		int temp;
		cin >> temp;
		if (temp == curr_l) curr_l++;
	}

//	cout << "curr_l: " << curr_l << "\n";

	if (n == curr_l - 1) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";


	return 0;
}
