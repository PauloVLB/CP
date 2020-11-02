#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define vi vector<i64>

using namespace std;

int n, q, a, b, x;
vi psa;

int main() {_
    cin >> n >> q;
    psa = vi(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> x;
        psa[i] = psa[i-1] ^ x;
    }

    for(int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << (psa[b] ^ psa[a-1]) << endl;
    }


    return 0;
}