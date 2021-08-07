#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 10005
#define int long long

using namespace std;

int is_prime[MAX];
int da[MAX];
int n, k, ult = 2;

void crivo(int x) {
    is_prime[0] = is_prime[1] = 1;
    for(int i = 1; i <= x; i++) {
        if(!is_prime[i]) {
            if(i != 2) {
                da[ult+i+1] = 1;
                ult = i;
            }
            
            for(int j = 2*i; j <= x; j += i) {
                is_prime[j] = 1;
            }
        }
    }
}

int32_t main() {_ 
    cin >> n >> k;

    crivo(n+1);

    int ans = 0;
    for(int i = 2; i <= n; i++) {
        // cout << i << " " << da[i] << "-" << !is_prime[i] << endl;
        if(!is_prime[i] && da[i]) {
            // cout << i << endl;
            ans++;
        }
    }

    cout << (ans >= k ? "YES" : "NO") << endl;
}