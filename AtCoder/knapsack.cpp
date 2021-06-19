#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define MAXN 105
#define MAXW 100005

using namespace std;

ll n, p;
ll w[MAXN], v[MAXN];
vvi memo(MAXN, vi(MAXW, -1));

ll dp(ll i, ll j) {
    if(i < 1) return 0;  

    if(memo[i][j] != -1) return memo[i][j];

    if(w[i] <= j) {
        return memo[i][j] = max(dp(i-1, j), dp(i-1, j-w[i]) + v[i]);
    } 

    return memo[i][j] = dp(i-1, j);
}

int main() {_ 
    cin >> n >> p;

    for(int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    cout << dp(n, p) << endl;
}