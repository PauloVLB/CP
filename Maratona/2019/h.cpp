#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define int long long

using namespace std;

int v, n;

int32_t main() {_ 
    cin >> v >> n;
    int tot = v*n;
    for(int i = 1; i <= 9; i++) {
        cout << (tot*i+10-1)/10 << " ";
    }
    cout << endl;
}