#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define int long long
#define MAX 100005

using namespace std;

int n, s;
int a[MAX];

int32_t main() {_ 
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }

    int x; cin >> x;

    int turn = x/s;
    int ans = turn*n;
    int currs = s*turn;

    for(int i = 0; i < n; i++) {
        if(currs > x) break;
        currs += a[i];
        ans++;
    }

    cout << ans << endl;
}