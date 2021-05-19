#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define INF 1e9+5
#define MAX 100005

using namespace std;

int t, a, b, ans, inv, n, r, num;
vi dist;
queue<int> q;

int main() {_ 
    cin >> t;
    
    while(t--) {
        cin >> a >> b;
        dist = vi(MAX, INF);

        q.push(a);
        dist[a] = 0;

        while(!q.empty()) {
            n = q.front(); q.pop();
    
            if(n == b) {
                ans = dist[n];
                break;
            }

            if(dist[n+1] == INF) {
                dist[n+1] = dist[n] + 1;
                q.push(n+1); 
            }
            
            inv = 0, num = n;
            while(num != 0) {
                r = num%10;
                inv = inv*10 + r;
                num /= 10;
            }

            if(dist[inv] == INF) {
                dist[inv] = dist[n] + 1;
                q.push(inv); 
            }
        }

        cout << ans << endl;

        while(!q.empty()) q.pop();
    }
}