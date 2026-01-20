#include <bits/stdc++.h>
using namespace std;


int main() {

    int s, n;
    cin >> s >> n;
    int total_p = s;
    bool check = true;
    for (int i=0; i<n; i++) {
        int xi, yi;
        cin >> xi >> yi;
        
        if (total_p > xi) {
            total_p+= yi;
        } else {
           check = false;
        } 
     
    }
    if (check == false) cout << "NO"; else cout << "YES";
    
    

    return 0;
}

