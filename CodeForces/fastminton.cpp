#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

string s;
int p[2], g[2], serv;

int main() {_ 
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == 'S') {
            p[serv]++;
        } else if(s[i] == 'R') {
            p[!serv]++;
            serv = !serv;
        } else {
            if(i == n-1) {
                printf("%d %s - %d %s\n", g[0], (g[0] > g[1] ? "(winner)" :  ""), g[1], (g[0] < g[1] ? "(winner)" :  ""));
            } else {
                printf("%d (%d%s) - %d (%d%s)\n", g[0], p[0], (!serv ? "*" : ""), g[1], p[1], (serv ? "*" : "")); 
            }
        }
        
        if((p[0] >= 5 || p[1] >= 5) && abs(p[0] - p[1]) >= 2 || (p[0] == 10 || p[1] == 10)) {
            if(p[0] > p[1]) {
                g[0]++;
            } else {
                g[1]++;
            }
            p[0] = p[1] = 0;
        }
    }
}