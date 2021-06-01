#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MOD 1000007

using namespace std;

int t, k, n;

int main() {_ 
    cin >> t;

    while(t--) {
        cin >> k >> n;
        queue<int> q;

        int s = 0;
        for(int i = 0; i < k; i++) {
            q.push(i);
            s += i;
        }
        q.push(s);

        if(n <= k) {
            cout << n-1 << endl;
        } else {
            for(int i = 0; i < n-k-1; i++) {
                int x = q.front(); q.pop();
                s = (s*2 - x + MOD)%MOD;
                q.push(s);
            }
            cout << s << endl;
        }
    }
}