#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> f(105);
        int mf = -1;
        int me = INF;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            f[x]++;
            me = min(me, x);
        }

        cout << n-f[me] << endl;
    }
}