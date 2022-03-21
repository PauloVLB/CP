#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        char l; cin >> l;

        int n = s.size();

        vector<int> ids;
        for(int i = 0; i < n; i++) {
            if(s[i] == l) {
                ids.push_back(i);
            }
        }   

        if(ids.empty()) {
            cout << "NO\n";
            continue;
        }
        int ok = 0;
        for(int i : ids) {
            int dir = n - i - 1;
            int esq = i;

            if(dir%2 == 0 && esq%2 == 0) {
                ok = 1;
            }
        }

        if(ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}