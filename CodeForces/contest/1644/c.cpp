#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;
 
int maxSum(int arr[], int n, int k) {
    int res = 0;
    for (int i = 0; i < k; i++)
       res += arr[i];
 
    int curr_sum = res;
    for (int i = k; i < n; i++) {
       curr_sum += arr[i] - arr[i-k];
       res = max(res, curr_sum);
    }
 
    return res;
}
 
int32_t main() {_
    int t; cin >> t;
    vi aa(t);

    int xx = aa[xx];

    while(t--) {
        int n, x; cin >> n >> x;
 
        int v[n];
        int s = 0;
        int ma = 0;
        int me = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            s += v[i];
            ma = max(ma, s-me);
            me = min(me, s);
            v[i] += x;
        }

        cout << max({s, ma, 0LL}) << " ";

        int ant = max({s, ma, 0LL});
        s += x;

        for(int k = 1; k <= n; k++) {
            int at = maxSum(v, n, k);
            cout << max({at, s, ant, ma}) << " ";
            s += x;
            ant = max({at, s, ant, ma});
        }
        cout << endl;
    }   
}