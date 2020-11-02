#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;
int t, v, ans;

int main() {_
	cin >> n;
	
	while(n--) {
        cin >> t >> v;
    	ans += t*v; 	
    }
	
	cout << ans << endl;
    
	return 0;
}