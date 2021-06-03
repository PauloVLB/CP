#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 1e9+7
#define MAX 1000005

using namespace std;

int n, x;
int c[105];
vector<int> memo(MAX, -1);

int f(int x) {
    if(x == 0) return 0;
    if(x < 0) return -1;

    if(memo[x] != -1) return memo[x];

    int ans = INF;
    for(int i = 1; i <= n; i++) {
        int a = f(x - c[i]) + 1;
        if(a != 0) {
            memo[x] = a;
            ans = min(ans, a);
        }
    }

    return memo[x] = ans;
}

int main() {_
    cin >> n >> x;

    for(int i = 1; i <= n; i++) {
        cin >> c[i];
    }

    int ans = f(x);
    cout << (ans == INF ? -1 : ans) << endl;
}
