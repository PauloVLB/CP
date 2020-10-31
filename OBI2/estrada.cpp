#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int t, n; 
double v[10005], d[10005], ans, last_dist, next_dist;


int main() {_ 
    cin >> t >> n;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    v[n] = t;
    sort(v, v+n);

    last_dist = v[0];
    next_dist = (v[1] - v[0])/2.0;
    ans = last_dist + next_dist;

    for(int i = 1; i < n; i++) {
        last_dist = next_dist;
        next_dist = (v[i+1] - v[i])/(i == n-1 ? 1.0 : 2.0);
        ans = min(last_dist + next_dist, ans);

    }

    cout << fixed << setprecision(2) << ans << endl;
}