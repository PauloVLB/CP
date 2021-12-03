#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int n;
int32_t main() {_ 
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    int ans = -1;
    for(int i = 0; i < n; i++) {
        if((n-i)%3 == 0) {
            ans = v[i];
            break;
        } else {
            int at = v[i];
            while(v[i] == at) i++;
            i--;
        }
    }
    // 1 4 4 7 8 9 9 9
    cout << ans << endl;
}