#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pii pair<int, int>

using namespace std;

int n, k, x;
priority_queue<pii, vector<pii>, greater<pii> > pq;

int main() {_
    while((cin >> n >> k) && (n || k)) {
        for(int i = 1; i <= k-1; i++){
            cin >> x;
            pq.push({x, i});
        }

        for(int i = k; i <= n; i++) {
            cin >> x;
            pq.push({x, i});

            while(pq.top().second <= i-k) {
                pq.pop();
            }

            cout << pq.top().first << (i != n ? ' ' : '\n');
        }

        while(!pq.empty()) pq.pop();
    }
    return 0;
}