#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int t;
int main() {_ 
    cin >> t;

    while(t--) {
        map<char, int> m;
        for(int i = 0; i < 26; i++) {
            char c; cin >> c;
            m[c] = i;
        }
        string s; cin >> s;

        int ans = 0;
        int last = m[s[0]];
        // cout << s << " " << m[s[0]] << " ";
        for(int i = 1; i < (int) s.size(); i++) { 
            // cout << s << " " << m[s[i]] << " ";
            ans += abs(last - m[s[i]]);
            last = m[s[i]];
        }
        // cout << endl;
        cout << ans << endl;
    }
}