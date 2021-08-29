#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 200005

using namespace std;

int n, k, t;

int main() {_ 
    cin >> t;

    while(t--) {
        cin >> n >> k;

        vector<int> a(n+1);
        a[0] = 0;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int l = 0, r = n;
        int ans = 0;

        while(l < r) {
            if(a[r] + a[l] >= k) {
                ans++;
                r--;
                if(a[l] != 0) l++;  
            } else {
                l++;
            }
        } 

        cout << ans << endl;
    }
    
}