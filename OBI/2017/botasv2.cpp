#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 10005

using namespace std;

int n, m, ans, maior = 29, menor = 61;
char l;
int d[MAX], e[MAX];

int main() {_
    cin >> n;
    while(n--) {
        cin >> m >> l;
        if(l == 'D') d[m]++;
        else e[m]++;
        maior = max(maior, m);
        menor = min(menor, m);
    }

    for(int i = menor; i <= maior; i++) {
        ans += min(e[i], d[i]);
    }

    cout << ans << endl;
    
    return 0;
}