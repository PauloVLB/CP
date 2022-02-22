#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_
    int t; cin >> t;

    while(t--) {
        map<char, bool> tem;
        tem['R'] = false;
        tem['G'] = false;
        tem['B'] = false;

        int ok = true;
        for(int i = 0; i < 6; i++) {
            char c; cin >> c;
            if(isupper(c)) {
                if(!tem[c]) {
                    ok = false;
                } 
            } else {
                c = toupper(c);
                tem[c] = true;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}