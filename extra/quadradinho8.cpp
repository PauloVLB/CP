#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, xi, s;
long long ans;
map<int, int> f;

int main(){_ 
    cin >> n;

    f[0] = 1;
    for(int i = 0; i < n; i++) {
        cin >> xi;
        s = (s + xi)%8;
        ans += f[s];
        f[s]++; 
    }

    cout << ans << endl;
}