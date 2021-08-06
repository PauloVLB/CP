#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define int long long
#define MAX 100000005

using namespace std;

int t, n;
bitset<MAX> is_prime;
vector<int> p;
//map<int, pair<int, int>> tab;
vector<pair<int, int>> tab(MAX);

void crivo() {
    is_prime[0] = is_prime[1] = 1;
    int r = 1, c = 1;
    for(int i = 2; i <= MAX; i++) {
        if(!is_prime[i]) {
            p.push_back(i);
            tab[i] = {r, c++};
            if(c > r) {
                r++;
                c = 1;
            }

            for(int j = i*i; j <= MAX; j += i) {
                is_prime[j] = 1;
            }
        }
    }
}

int32_t main(){_ 
    scanf("%lld", &t);

    crivo();
    while(t--) {
        scanf("%lld", &n);
        // cout << n << endl;
        if(is_prime[n]) {
            printf("%d\n", -1);
        } else {
            printf("%lld %lld\n", tab[n].first, tab[n].second);
        }
    }
}