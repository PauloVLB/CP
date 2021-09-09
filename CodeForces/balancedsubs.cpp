#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        int n; cin >> n;
        string s;
        cin >> s;

        int ok = 0;
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i-1]) {
                ok = 1;
                cout << i << " " << i+1 << endl;
                break;
            }
        }

        if(!ok) cout << -1 << " " << -1 << endl;
    }
}