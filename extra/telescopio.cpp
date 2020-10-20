#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int a, n, f, ans;

int main() {_

    cin >> a >> n;

    while(n--){ 
        cin >> f;
        ans += (f*a) >= 40000000;
    }

    cout << ans << endl;

    return 0;
}
