#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
 
using namespace std;
 
int t;
 
int main() {_ 
    cin >> t;
 
    while(t--) {
        int n, m; cin >> n >> m;
        if(n == 1 && m == 1) cout << 0 << endl;
        else if(n == 1 || m == 1) cout << 1 << endl;
        else cout << 2 << endl;
    }
}