#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    //pattern is in prime
    //create the entire vector of long long and then search that vector
    ll max_val = LLONG_MAX;
    vector<int> v;
    for (int i=0; i<n; i++) {
        // if prime then put in the vector
        int x; cin >> x;
        v.push_back(x);
    }

    max_val = max(v.begin(), v.end());
    // get prime values
    vector<int> v_prime;
    for (int i=1; i<max_val/2; i++) {
        bool is_prime = true;
       for (int j=1; j<i; j++) {
            if (i%j == 0) is_prime = false;
       }
       if (is_prime) v_prime.push_back(i);
    }

    //binary search
    for (int i=0; i<n; i++) {
        // 
        if ((v[i])^(1/2) 
    
    return 0;

}
