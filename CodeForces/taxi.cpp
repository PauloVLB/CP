#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n;
int v[5];

int main() {_ 
    cin >> n;
    
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v[x]++;
    }

    ans = v[4];
    v[1] = max(0, v[1] - v[3]);
    ans += v[3];
    ans += v[2]/2;
    if(v[2] & 1) v[1] += 2;
    ans += (v[1] + 3)/4;

    cout << ans << endl;
    
}