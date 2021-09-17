#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n, h, x, ans;

int main() {_ 
    cin >> n >> h;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x > h) ans++;
        ans++;
    }

    cout << ans << endl;
}