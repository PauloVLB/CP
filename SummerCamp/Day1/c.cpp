#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long
#define MAXN 100005
#define MAX 1000000005

using namespace std;

int32_t main() {_
    int t; cin >> t;
    while(t--) {
        int n, c; cin >> n >> c;
        int a[MAXN];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }

        sort(a, a+n);
        
        int r = 1;
        int l = MAX;
        int ans=0;
        
        while(r <= l) {
            int mid = ((l + r)/2);
            int fi = a[0];
            int tt = 1;
            for(int i = 1; i < n; i++) {
                if(a[i] - fi >= mid) {
                    tt++;
                    fi=a[i];
                }
            }
            if(tt < c) {
                l = mid-1;
            } else {
                ans = mid;
                r = mid+1;
            }
        }
        cout << ans << endl;
    }
}