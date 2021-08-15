#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define MAX 10000001

using namespace std;

int a[MAX], t, c;
vector<int> ans(MAX, -1);

int32_t main() {_
    for(int i = 1; i <= MAX; i++) {
        for(int j = i; j <= MAX; j += i) {
            a[j] += i;
        }
    }

    for(int i = 1; i <= MAX; i++) {
        if(a[i] < MAX && ans[a[i]] == -1) ans[a[i]] = i;
    }

    cin >> t;

    while(t--) {
        cin >> c;
        cout << ans[c] << endl;
    }

}
