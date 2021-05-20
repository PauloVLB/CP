#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define INF 1e9+7

using namespace std;

int n, m, ans;
queue<int> q;
vi dist;
int op[6];

int main() {_ 
    cin >> n >> m;

    map<int, int> dist;
    q.push(n);
    dist[n] = n == m ? 2 : 0;

    while(!q.empty()) {
        int x = q.front(); q.pop();

        if(x == m) {
            ans = dist[x];
            break;
        }
        op[0] = x*2;
        op[1] = x/2;
        op[2] = x*3;
        op[3] = x/3;
        op[4] = x+7;
        op[5] = x-7;

        for(int i = 0; i < 6; i++) {
            if(dist.find(op[i]) == dist.end()) {
                dist[op[i]] = dist[x] + 1;
                q.push(op[i]);
            }
        }
    }

    cout << ans << endl;
}