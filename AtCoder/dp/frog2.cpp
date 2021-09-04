#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 100005
#define INF 0x3f3f3f3f

using namespace std;

int n, k;
int h[MAX];
vector<int> memo(MAX, -1);

int dp(int x) {
    if(x == 1) return 0;
    
    if(memo[x] != -1) return memo[x];

    int m = INF;
    for(int i = 1; i <= min(x, k); i++) {
        m = min(m, abs(h[x] - h[x-i]) + dp(x-i));
    }

    return memo[x] = m;
}

int main(){_ 
    cin >> n >> k; 

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    cout << dp(n) << endl;
}