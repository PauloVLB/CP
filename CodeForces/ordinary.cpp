#include <bits/stdc++.h>
 
using namespace std;
 
int t, n, ans;
long long int u;
string b;
 
int main() {
    cin >> t;
 
    while(t--) {
        cin >> n;
        int x = log10(n) + 1;
        
        for(int i = 0; i < x; i++) {
            u = u * 10 + 1;
            for(int j = 1; j <= 9; j++) {
                if(u * j <= n) ans++;
            }
        }
        cout << ans << endl;
        u = 0;
        ans = 0;
    }
 
}