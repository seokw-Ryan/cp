#include <bits/stdc++.h>
#define ll = long long
using namespace std;

int main() {

	int n;
	unordered_map<string, int> reg;
	for (int i=0; i<n; i++) {
		//check and if it does not exist then put it in the database
    string temp;
    cin >> temp;
    // if its not on teh hash map, then add it to the hash map
    if (reg.find(temp) == reg.end()) {
      cout << "OK" << "\n";
      reg[temp] = 1;

    } else {
      
      cout << temp << reg[temp] << "\n";
      reg[temp]++;

    }  
  }
}
    

