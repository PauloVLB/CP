#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long

using namespace std;

i64 n, k, ans, si;
priority_queue<i64> pq;

int main() {_
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> si;
        pq.push(si);
    }

    while(n > 0) {   
        //cout << pq.top() << endl;
        if(n < k) {
            ans += pq.top()*n;
            n = 0;
        } else {
            ans += pq.top()*k;
            n -= k;
        }
        pq.pop();
    }

    cout << ans << endl;

    return 0;
}