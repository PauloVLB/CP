#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

using namespace std;

int ant, n, m, v[1000004], at, f[10];

int main() {
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    cin >> ant;
    ++f[v[ant]];

    for(int i = 1; i < m; i++) {
        cin >> at;
        if(at > ant) {
            for(int j = ant+1; j <= at; j++) ++f[v[j]];
        } else {
            for(int j = ant-1; j >= at; j--) ++f[v[j]];
        }
        ant = at;
    }

    for(int i = 0; i < 10; i++) {
        cout << f[i] << (i == 9 ? '\n' : ' ');
    }

    return 0;
}