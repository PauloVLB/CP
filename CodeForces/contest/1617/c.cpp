#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

// se é par, consegue até N/2 - 1
// se é impar, consegue até N/2
int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        multiset<int> consegue;
        vector<int> f(n+1, 0);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] <= n && f[v[i]] == 0) f[v[i]]++;
            else {
                if(v[i]%2 == 0) {
                    consegue.insert(v[i]/2 - 1);
                } else {
                    consegue.insert(v[i]/2);
                }
            }
        }

        int ans = 0, da = 1;
        for(int i = 1; i <= n; i++) {
            auto pt = consegue.lower_bound(i);
            if(f[i] || pt != consegue.end()) {
                if(!f[i]) {
                    consegue.erase(pt);
                    ans++;
                } else {
                    f[i]--;
                }
            } else {
                da = 0;
                break;
            }
        }

        if(da) {
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }
}