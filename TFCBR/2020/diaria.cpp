#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define i64 long long

using namespace std;

i64 n, k, p, q, x, y, psa[100005], last;

int main (){_ 
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> k >> p;
        for(int j = last+1; j <= last+k; j++) {
            psa[j] = p + psa[j-1];
        }
        last += k;
    }

    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << psa[y] - psa[x-1] << endl;
    }
}