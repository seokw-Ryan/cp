#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    int counter = 0;
    for (int i=0; i<n; i++) {
        int num = 0;
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        if (t1 == 1) num++;
        if (t2 == 1) num++;
        if (t3 == 1) num++;
        
        if (num >= 2) counter++;
    }
    cout << counter;

          



    return 0;
}
