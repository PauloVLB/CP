#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1000123
#define INF 1e9+7
#define vi vector<int>

using namespace std;

int o, d, k, x, ans;
vi dist, p, b;
queue<int> q;

int main() {_ 
    while((cin >> o >> d >> k) && (o || d || k)) {
        dist = vi(MAX, INF);
        p = vi(MAX, 0);

        for(int i = 0; i < k; i++) {
            cin >> x;
            p[x] = 1;
        }

        q.push(o);
        dist[o] = 0;

        ans = -1;
        while(!q.empty()) {
            int n = q.front(); q.pop();

            if(n == d) {
                ans = dist[n];
                break;
            }
            if(n-1 > 0 && dist[n-1] == INF && !p[n-1]) {
                dist[n-1] = dist[n] + 1;
                q.push(n-1);
            }
            if(n%2 == 0 && dist[n/2] == INF && !p[n/2]) {
                dist[n/2] = dist[n] + 1;
                q.push(n/2);
            }
            if(n+1 <= 1e5 && dist[n+1] == INF && !p[n+1]) {
                dist[n+1] = dist[n] + 1;
                q.push(n+1);
            }
            if(n*2 <= 1e5 && dist[n*2] == INF && !p[n*2]) {
                dist[n*2] = dist[n] + 1;
                q.push(n*2);
            }
            if(n*3 <= 1e5 && dist[n*3] == INF && !p[n*3]) {
                dist[n*3] = dist[n] + 1;
                q.push(n*3);
            }
        }

        cout << ans << endl;
        while(!q.empty()) q.pop();
    }
}