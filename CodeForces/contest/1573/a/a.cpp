#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] != '0') {
                ans += s[i] - '0' + (i != n-1);
            }
        }
        cout << ans << endl;
    }
}