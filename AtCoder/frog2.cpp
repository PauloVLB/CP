#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005
#define INF 1e9+7

using namespace std;

int n, k, h[MAX];
vector<int> memo(MAX, -1);

int e(int n) {
    if(n == 1) return 0;

    if(memo[n] != -1) return memo[n];

    int ans = INF;
    for(int i = k; i >= 1; i--) {
        if(n-i >= 0) ans = min(ans, abs(h[n-i] - h[n]) + e(n-i));
    }

    return memo[n] = ans;
}

int main() {_ 
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    cout << e(n) << endl;
}