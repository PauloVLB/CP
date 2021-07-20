#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, q, l, r;
string s;

int main() {_
    cin >> n >> q;
    cin >> s;

    vector<int> psa(n+1);
    psa[0] = 0;
    for(int i = 1; i <= n; i++) {
        psa[i] = psa[i-1] + (s[i-1]-'a'+1);
    }

    while(q--) {
        cin >> l >> r;
        cout << psa[r] - psa[l-1] << endl;
    }
    return 0;
}
