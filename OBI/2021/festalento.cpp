#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1000005

using namespace std;

int n, m;
// tentar ordenar as queries
int main() {_ 
    cin >> n >> m;
    
    vector<int> sud(n+1, 0);
    for(int i = 1; i <= n; i++) {
        sud[i] = i;
    }
    for(int i = 0; i < m; i++) {
        int t; cin >> t;
        for(int j = 1; j <= n; j++) {
            if(j < (int) sud.size() && sud[j]%t == 0) {
                sud.erase(sud.begin() + j);
            }
        }
    }

    int qnt = 0;
    for(int i = 1; i <= (int) sud.size(); i++) {
        if(qnt > 10000) break;
        cout << sud[i] << endl;
        qnt++;
    }
}