#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

using namespace std;

ll n, ans, x;
map<ll, int> a;

int main() {_
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cin >> x;
        a[x]++;
        ans += i - a[x];
    }

    cout << ans << endl;
}
