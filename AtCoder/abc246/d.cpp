#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define endl '\n'
#define int long long

using namespace std;

void print(vector<int> a) {
    cout << "[ ";

    for(int x : a) {
        cout << x << " ";
    }

    cout << "]\n";
}

int x(int a, int b) {
    return (a*a*a  + a*a*b + a*b*b + b*b*b);
}

int32_t main() {_ 
    int n; cin >> n;

    int ans = 1e18+5;

    for(int a = 0; a <= 1000000; a++) {
        int l = -1; 
        int r = 1000001;

        while(l < r-1) {
            int m = (r+l)/2;

            if(x(a, m) >= n) {
                r = m;
            } else {
                l = m;
            }
        }

        ans = min(ans, x(a, r));
    } 
    cout << ans << endl;
}