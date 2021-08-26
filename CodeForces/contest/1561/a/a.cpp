#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t;

int main() {_ 
    cin >> t;
    while(t--) {
        int n; cin >> n;
        int ma = 0;
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        vector<int> ord = v;
        sort(ord.begin(), ord.end());

        int ans = 0;
        while(v != ord) {
            if(ans%2 == 0) {
                // verifica os impares
                for(int i = 1; i <= n-2; i+=2) {
                    if(v[i] > v[i+1]) swap(v[i], v[i+1]);
                }
            } else {
                // verifica os pares
                for(int i = 2; i <= n-1; i+=2) {
                    if(v[i] > v[i+1]) swap(v[i], v[i+1]);
                }
            }
            ans++;

            // for(int x : v) {
            //     cout << x << " ";
            // }
            // cout << endl;
        }

        cout << ans << endl;
    }
}