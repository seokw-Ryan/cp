#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int max=INT_MIN, min=INT_MAX;
	int max_pos, min_pos;
	for (int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		if (max < temp){ max = temp; max_pos = i;}
		if (min >= temp) {min = temp; min_pos = i;}	
	}
	int total;
	if (max_pos > min_pos) {
		total = max_pos + (n - min_pos - 1) - 1;
	} else {
		total = max_pos + (n- min_pos-1) ;
	}
	cout << total;
	return 0;
}
