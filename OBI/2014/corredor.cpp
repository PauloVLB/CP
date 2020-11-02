#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, xi, s, ans, menor;

int main(){_ 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> xi;
        s += xi;
        ans = max(ans, s-menor);
        menor = min(menor, s);
    }
    cout << max(ans, s) << endl;
}