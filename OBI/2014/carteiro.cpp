#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 45005

using namespace std;

int n, m, o, f, ans;
int c[MAX];
map<int, int> d;

int main() {_ 
    cin >> n >> m;

    d[0] = 0;
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        d[c[i]] = i+1; 
    }

    o = c[0];
    for(int i = 0; i < m; i++) {
        cin >> f;
        if(o <= f) ans += d[f] - d[o];
        else ans += d[o] - d[f];
        o = f;
    }

   cout << ans << endl;
}