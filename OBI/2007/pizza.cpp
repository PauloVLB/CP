#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005

using namespace std;

int n, ans, menor, maior, psa[MAX], menor_soma, xi;

int main(){_
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> xi;
        psa[i] = psa[i-1] + xi;   
        ans = max(ans, psa[i]-menor);
        menor = min(menor, psa[i]);
    }

    for(int i = 1; i <= n; i++) { 
        menor_soma = min(menor_soma, psa[i]-maior);
        maior = max(maior, psa[i]);
    }

    cout << max(ans, psa[n] - menor_soma) << endl;
}