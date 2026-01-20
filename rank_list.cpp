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
    
    sort(p.begin(), p.end());

    int counter_pos = 0;
    int num_team = 0;
    int pos = 1;
    pair<int, int> prev = p[0];
    cout << "prev" << prev.first << " " << prev.second << "\n";
    while (pos < n) {
       cout << p[pos].first << " " << p[pos].second << " ";
       if (p[pos] != p[pos-1]) counter_pos++;
       if (k == counter_pos) num_team++;
       pos++;
    }
    cout << num_team << "\n";

    return 0;

}
