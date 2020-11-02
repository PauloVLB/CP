#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int p[10][100005], n, m, nBarra, cont[10], ini, fim, first;

int main() {
    cin >> n >> m;

    for(int i = 0; i < 10; i++) {
        p[i][0] = 0;
    }
    for(int i = 1; i <= n; i++) {
        cin >> nBarra;
        if(i == 1) first = nBarra;
        for(int j = 0; j < 10; j++) {
            p[j][i] = p[j][i-1];
        }
        p[nBarra][i]++; 
    }

    cin >> ini;
    for(int i = 1; i < m; i++) {
        cin >> fim;
        for(int j = 0; j < 10; j++) {
            if(ini > fim) cont[j] += p[j][ini-1] - p[j][fim-1];
            else cont[j] += p[j][fim] - p[j][ini]; 
        }
        ini = fim;
    }

    cont[first]++;
    for(int i = 0; i < 10; i++) {
        cout << cont[i] << " ";
    }
    cout << endl;

    return 0;
}