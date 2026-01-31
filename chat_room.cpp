#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	string s;
	cin >> s;

	// traverse the given string and "hello" at the same time
	int s_len = s.length();
	string h = "hello";
	int j = 0; // counter for hello 
	for (int i=0; i<s_len; i++) {
		if (s[i] == h[j]) j++;
	}

	int h_len = h.length();
	if (h_len == j) cout << "YES";
	else cout << "NO";
	//cout << "h_len: " << h_len << "\n";
	//cout << "j: " << j;
	




	return 0;
}
