#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define vi vector<int>
#define vvi vector<vi>
#define MAXN 105
#define MAXC 1000005
#define INF 0x3f3f3f3f

using namespace std;

int n, x;
int c[MAXN];
vvi memo(MAXC, vi(MAXC, -1));

int dp(int z, int l) {
    if(z == 0 || l == 0) return 1;
    if(memo[z][l] != -1) return memo[z][l];

    int ans = INF;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= l; j++) {
            if(z - c[i] >= 0) {
                ans = min(dp(z - c[i], l-1), ans);
            }
        }
    }

    return memo[z][l] = ans;
}

int main() {_
    cin >> n >> x;

    for(int i = 1; i <= n; i++) {
        cin >> c[i];
    }

    cout << dp(n, x) << endl;
}

