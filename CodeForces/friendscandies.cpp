#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 200005

using namespace std;

int t, n, s, c, ans;
int a[MAX];

int main() {_
    cin >> t;
 
    while(t--) {
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }
        c = s/n;

        if(s%n != 0) {
            cout << -1 << endl;
        } else {
            for(int i = 0; i < n; i++) {
                if(a[i] > c) ans++;
            }
            cout << ans << endl;
        }
    
        ans = 0;
        s = 0;
    }
}
