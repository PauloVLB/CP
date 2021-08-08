#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005
#define int long long

using namespace std;

int is_prime[MAX];
int p[MAX], color[MAX];
int n, qnt = 1;

void crivo(int x) {
    is_prime[0] = is_prime[1] = 1;

    for(int i = 1; i <= x; i++) {
        if(!is_prime[i]) {
            color[i] = 1;
            for(int j = i*i; j <= x; j += i) {
                is_prime[j] = 1;
                color[j] = 2;
                qnt = 2;
            }
        }
    }
}

int32_t main() {_ 
    cin >> n;
   
    crivo(n+1);

    cout << qnt << endl;
    for(int i = 2; i <= n+1; i++) {
        cout << color[i] << " ";
    }
    cout << endl;
}