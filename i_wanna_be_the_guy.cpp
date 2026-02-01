#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	set<int> s;
	
	// Little X
	int p_x;
	cin >> p_x;
	for (int i=0; i<p_x; i++) {
		int temp;
		cin >> temp;
		s.insert(temp);
	}

	//Little Y
	int p_y;
	cin >> p_y;
	for (int i=0; i<p_y; i++) {
		int temp;
		cin >> temp;
		s.insert(temp);
	}

	if (s.size() == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";


	return 0;
}
