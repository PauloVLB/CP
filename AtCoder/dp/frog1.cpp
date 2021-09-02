#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 100005

using namespace std;

vector<int> h;
vector<int> memo(MAX, -1);

int dp(int x) {
    if(x == 1) return 0;
    if(x == 2) return abs(h[x] - h[x-1]);

    if(memo[x] != -1) return memo[x];

    return memo[x] = min(dp(x-1) + abs(h[x-1] - h[x]), dp(x-2) + abs(h[x-2] - h[x]));
}

int main() {_ 
    int n; cin >> n;
    h = vector<int>(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    cout << dp(n) << endl;
}