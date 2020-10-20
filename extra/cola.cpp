#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, ans;
string s;
map<string, int> resp;

int main() {_
	cin >> n;
	while(n--) {
    	cin >> s;
        resp[s]++;
    }
            
   	for(auto x : resp) {
    	ans += x.second > 1 ? x.second : 0;
    }
	
	cout << ans << endl;
}