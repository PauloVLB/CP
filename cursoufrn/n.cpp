#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define MAX 31622780
#define int long long

using namespace std;

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
    crivo(MAX - 1);

    int n, m, k; cin >> m >> n >> k;

    vector<int> c(n);

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<vector<int>> edgs(m);

    for(int i = 0; i < k; i++) {
        int u, v, d; cin >> u >> v >> d; u--, v--; 
        while(d--) edgs[u].push_back(v);
    }

    int id_curr_p = 0; // id_curr_p é indice dos primos do crivo
    set<int> ans;

    for(int i = 0; i < m; i++) { // m é a quantidade de M-nodes
        // quero checar se o meu primo divide o primeiro cara da lista de arestas 
        while(id_curr_p < (int) p.size() && c[edgs[i][0]]%p[id_curr_p] != 0) {
            id_curr_p++;
        }

        if(id_curr_p == (int) p.size()) {
            for(int j = 0; j < n; j++) {
                if(c[j] != 1) {
                    ans.insert(c[j]);
                }
            }
            break;
        } else {
            for(int ed : edgs[i]) {
                c[ed] /= p[id_curr_p];
            }
            ans.insert(p[id_curr_p]);
        }
    }

    for(int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}