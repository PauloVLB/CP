#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t;
map<char, char> m;
int main() {_ 
    cin >> t;
    m['U'] = 'D';
    m['D'] = 'U';
    m['L'] = 'L';
    m['R'] = 'R';
    while(t--) {
        int n; cin >> n;

        for(int i = 0; i < n; i++) {
            char c; cin >> c;
            cout << m[c];
        }
        cout << endl;
    }
}