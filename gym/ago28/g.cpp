#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 1005
#define int long long

using namespace std;

int n, k;
int a[MAX];

int32_t main() {_ 
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);

    int ans = 0, cnt = 0;
    for(int i = n-1; i >= 0; i--) {
        if(cnt >= k) {
            break;
        }
        cnt++;
        ans += a[i];
    }

    cout << ans << endl;
}