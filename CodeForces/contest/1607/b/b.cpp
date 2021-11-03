#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int t;

int32_t main() {_ 
    cin >> t;


    while(t--) {
        int x, n; cin >> x >> n;
        
        if(n%4 == 0) {
            cout << x << endl;
        } else if(n%4 == 1) {
            cout << (x%2 == 0 ? x - n : x + n) << endl;
        } else if(n%4 == 2) {
            cout << (x%2 == 0 ? x + 1 : x - 1) << endl;
        } else {
            cout << (x%2 == 0 ? x + n + 1 : x - n - 1) << endl;
        }
    }
}