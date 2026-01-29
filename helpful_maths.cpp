#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    //Question is how do we separate the integers from "+"
    //There must be a function that does this for us
    vector<int> v;
    for (int i=0; i<s.length(); i++) {
        if (s[i] != '+') v.push_back(s[i] - '0');
    }

    sort(v.begin(), v.end());

    for (int i=0; i<v.size(); i++) {
        if (i+1 < v.size()) cout << v[i] << "+";
        else cout << v[i];
    }
    
    return 0;
}
