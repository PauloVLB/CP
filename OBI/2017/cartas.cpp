#include <bits/stdc++.h>

using namespace std;

int x, ans;

int main() {
	for(int i = 0; i < 3; i++) {
    	cin >> x;
        ans ^= x;
    }
    
    cout << ans << endl;
}