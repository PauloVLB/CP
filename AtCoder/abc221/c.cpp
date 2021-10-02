#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int32_t main() {_ 
    string n; cin >> n;

    sort(n.rbegin(), n.rend());

    int div[2] = {0, 0};
    for(int i = 0; i < (int) n.size(); i++) {
        int dig = n[i] - '0';
        int a = (div[0]*10 + dig) * div[1];
        int b = (div[1]*10 + dig) * div[0];

        if(a > b) {
            div[0] = div[0]*10 + dig;
        } else {
            div[1] = div[1]*10 + dig;
        }
    }

    cout << div[0]*div[1] << endl;
}