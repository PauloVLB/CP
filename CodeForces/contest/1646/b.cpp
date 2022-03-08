#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int32_t main() {_ 
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vi a(n);
        int s = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }

        sort(a.begin(), a.end());

        int l = 0;
        int r = n-1;

        int sr = 0;
        int sb = 0;
        int cr = 0;
        int cb = 0;

        while(l <= r) {
            if(sb >= sr) {
                sr += a[r];
                sb += a[l];
                cr++;
                cb++;
                r--;
                l++;
            } else if(sr > sb && cb <= cr) {
                sb += a[l];
                l++;
                cb++;
            } else {
                break;
            }
        }

        // cout << cr << " " << sr << endl;
        // cout << cb << " " << sb << endl;

        cout << ((sr > sb && cr < cb) ? "YES" : "NO") << endl;

    }
}