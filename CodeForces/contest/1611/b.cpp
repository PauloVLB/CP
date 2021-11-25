#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f

using namespace std;

int t;

int main() {_
    cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        cout << min((a+b)/4, min(a,b)) << endl;
    }
}