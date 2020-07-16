#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m, p, qnt;
string pro;
double preco, acm;

map<string, double> tab;

int main() {_
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m;
        for(int j = 0; j < m; j++) {
            cin >> pro >> preco;
            tab[pro] = preco;
        }
        cin >> p;
        for(int j = 0; j < p; j++) {
            cin >> pro >> qnt;
            acm += tab[pro]*qnt;
        }
        cout << fixed << setprecision(2) << "R$ " << acm << endl;
        acm = 0;
        tab.clear();
    }

    return 0;
}