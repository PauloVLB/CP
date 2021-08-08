#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100000005
#define MAXT 100000
#define int long long

using namespace std;

int n;
bitset<MAX> is_prime;
vector<int> p;

void crivo(int n) {
    is_prime[0] = is_prime[1] = 1;
    for(int i = 2; i <= n; i++) {
        if(!is_prime[i]) {
            p.push_back(i);
            for(int j = i*i; j <= n; j += i) {
                is_prime[j] = 1;
            }
        }
    }
}

int32_t main() {_ 
    //cin >> n;
    crivo(MAX);

    for(int i = 0; i < p.size(); i += 100) {
        printf("%lld\n", p[i]);
    }
}