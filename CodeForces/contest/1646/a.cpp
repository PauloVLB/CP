#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int32_t main() {_ 
    int t; cin >> t;

    while(t--) {
        int n, s; cin >> n >> s;

        cout << s/(n*n) << endl;
    }
}