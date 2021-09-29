#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1000

using namespace std;

int n, m, l;

int main() {_ 
    cin >> n >> m >> l;

    bitset<1000> mask;

    for(int i = 0; i < l; i++) {
        int x; cin >> x;
        mask.set(x-1);
    } 

    vector<bitset<1000>> inter;

    for(int i = 0; i < n; i++) {
        int k; cin >> k;

        bitset<1000> interr;

        while(k--) {
            int x; cin >> x;
            interr.set(x-1);
        }

        inter.push_back(interr);
    }

    int nao_da_mais = 2*n;
    int i;

    for(i = 0; i < nao_da_mais; i++) {
        mask ^= inter[i%n];

        if(mask.none()) {
            break;
        }
    }

    cout << (i != nao_da_mais ? i+1 : -1) << endl;
}