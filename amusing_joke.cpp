#include <bits/stdc++.h>
using namespace std;

int main() {

	string letter1, letter2, mixed;
	cin >> letter1 >> letter2 >> mixed;

	//combine letter1 and letter2 and compare with mixed
	string combined = letter1 + letter2;
	
	//sort the combined letter
	sort(combined.begin(), combined.end());
	//sort the mixed letter
	sort(mixed.begin(), mixed.end());

	if (combined == mixed) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	

	return 0;
}
