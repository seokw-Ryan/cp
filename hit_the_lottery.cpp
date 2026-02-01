#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

	int n;
	cin >> n;

	//find the minimum number of bills
	// 1, 5, 10, 20, 100
	//first divide by 100 then 20 and so on
	int num = 0;
	num += n/100;
	n = n%100;
	num += n/20;
	n = n%20;
	num += n/10;
	n = n%10;
	num += n/5;
	n = n%5;
	num += n/1;
	
	cout << num;
	return 0;
}
