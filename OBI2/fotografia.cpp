#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, a, l, x, y, ans = 1042, menor = 40005;

int main() {_ 
    cin >> a >> l >> n;

    for(int i = 1; i <= n; i++) {
        cin >> x >> y;
        if(((a <= x && l <= y) || (a <= y && l <= x)) && (x*y < menor)) {
            menor = x*y;
            ans = i;
        }
    }

    cout << (ans == 1042 ? -1 : ans) << endl;
}