#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int>
#define pb push_back

using namespace std;

int n;

int main() {_ 
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int p, q; cin >> p >> q;
        ans += q-p >= 2;
    }
    cout << ans << endl;
}