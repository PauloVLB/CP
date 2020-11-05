#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define vi vector<int>

using namespace std;

i64 f[105];
i64 n, k, a;
i64 ans, s; 
i64 estiou, vivas, maior;
char p;

int main() {_
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        cin >> a;
        ++f[a];   
        s += a;
    }
    
    vivas = k;

    for(int i = 0; i < n; i++) {
        cin >> p;
        if(estiou > maior) {
            maior = estiou;
            vivas -= f[estiou];
        } 
        if(p == 'C') {
            estiou--;
            s = (s + vivas)*(vivas > 0);
            ans += s;
        } else { 
            estiou++;
            if(estiou > 100) {
                estiou = 100;
                break;
            }
            s = (s - vivas)*(vivas > 0);
            ans += s;
        }   
                 
    }

    cout << ans << endl;
}
