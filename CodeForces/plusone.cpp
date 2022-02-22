#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int main() {_
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        int maior = -3;
        int menor = INF;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            maior = max(maior, a[i]);
            menor = min(menor, a[i]);
        }

        cout << maior - menor << endl;
    }
}