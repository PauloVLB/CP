#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define int long long
#define vi vector<int> 
#define MOD 998244353

using namespace std;

int n, k;
vi cards;

int32_t main() {_ 
    cin >> n >> k;
    
    cards = vi(n+1);

    for(int i = 0; i < k; i++) {
        char c;
        int x;
        cin >> c >> x;
        cards[x] = -1;
        if(c == 'L') {
            for(int j = x+1; j <= n; j++) {
                if(cards[j] != -1) {
                    cards[j]++;
                }
            }
        } else {
            for(int j = 1; j < x; j++) {
                if(cards[j] != -1) {
                    cards[j]++;
                } 
            }
        }
    }

    int ans = 1;
    for(int i = 1; i <= n; i++) {
        if(cards[i] != -1) {
            ans = (ans * cards[i])%MOD;
        }
    }

    cout << ans << endl;
}