#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 3005
#define int long long

using namespace std;

int n;
int is_prime[MAX];
int p[MAX];

void crivo(int x) {
    is_prime[0] = is_prime[1] = 1;
    for(int i = 2; i <= x; i++) {
        if(!is_prime[i]) {
            for(int j = i; j <= x; j += i) {
                p[j]++;
                is_prime[j] = 1;
            }
        }
    }
}

int32_t main() {_ 
    cin >> n;
    crivo(n+1);

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += (p[i] == 2);
    }

    cout << ans << endl;
}