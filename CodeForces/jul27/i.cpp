#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

using namespace std;

int v[] = {7, 27, 41, 49, 63, 78, 108};

int t;
int32_t main() {_
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int s = 0;
        int x = 0;
        for(int i = 0; i < n; i++) {
            cin >> x;
            s += v[x-1];
        }

        if(s < 69) {
            cout << s << endl;
        } else if(s < 89) {
            cout << s - 15 << endl;
        } else if(s < 120) {
            cout << s - 30 << endl;
        } else {
            cout << s - 50 << endl;
        }
    }
    return 0;
}
