#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;
double p, g, menor = 1<<20;

int main() {_
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p >> g;
        menor = min((p/g)*1000, menor);
    }

    cout << fixed << setprecision(2) << menor << endl;

    return 0;
}