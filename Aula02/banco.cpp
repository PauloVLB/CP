#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pii pair<int, int>

using namespace std;

int ans, c, n, t, d, tc, ic;
priority_queue<pii, vector<pii>, greater<pii> > pq; 

int main() {_
    cin >> c >> n;
    for(int i = 0; i < c; i++) {
        pq.push({0, i});       
    }

    for(int i = 0; i < n; i++) {
        cin >> t >> d;
        tc = pq.top().first;
        ic = pq.top().second;
        pq.pop();

        if (tc - t > 20) ans++;

        pq.push({max(t, tc)+d, ic});

    }
    
    cout << ans << endl;

    return 0;
}