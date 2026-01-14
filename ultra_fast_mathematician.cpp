#include <bits/stdc++.h>
using namespace std;

int main() {

	string s1, s2;
	cin >> s1 >> s2;
	int length = s1.length();
	vector<int> v(length);
	for (int i=0; i<length; i++) {
		if (s1[i] != s2[i]) {
			v[i] = 1;
		} else {
			v[i] = 0;
		}
	}


	for (int x: v) {
		cout << x;
	}

	return 0;


}

