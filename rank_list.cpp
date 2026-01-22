#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> p(n);

    for (int i=0; i<n; i++) {
        int prob, pen;
        cin >> prob >> pen;
        p[i] = {prob, pen};
    }
    // need to sort so that the first element is big to small 
    // and the second element is small to big
    sort(p.begin(), p.end(), [](auto &a, auto &b) {
	    return make_pair(-a.first, a.second) < make_pair(-b.first,
	    b.second);
	    });
    
    // and then we select the k-1 position
    // find the values (first and second) then loop through to find how many
    // elements there are with the same values
    pair<int, int> val = p[k-1];
    int count = 0;
    for (int i=0; i<n; i++) {
	    if (p[i] == val) count++;
    }
    cout << count << "\n";

    return 0;

}
