#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define vi vector<int>

using namespace std;

int n;
vi a, b, maybePerm;
set<int> ans;

int32_t main() {_
    cin >> n;
    a = b = vi(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());
    
    for(int i = 0; i < n; i++) {
        int maybeX = a[0] ^ b[i];

        maybePerm = vi(n);

        for(int j = 0; j < n; j++) {
            maybePerm[j] = a[j] ^ maybeX;
        }

        sort(maybePerm.begin(), maybePerm.end());

        if(maybePerm == b) { // maybePerm da certo ????
            ans.insert(maybeX); // entao maybeX é resposta ????
        }
    }
    cout << ans.size() << endl;

    for(int x : ans) {
        cout << x << endl;
    }
}   