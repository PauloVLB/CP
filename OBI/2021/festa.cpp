#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1000005

using namespace std;

int n, m, qnt;
int removed[MAX];
int t;
vector<int> bckp;

int main() {_ 
    cin >> n >> m;

    int remov = 0;
    vector<int> sud(n+1);

    for(int i = 1; i <= n; i++) {
        sud[i] = i;
    }

    for(int i = 0; i < m; i++) {
        cin >> t;
        
        for(int j = t; j < (int) sud.size(); j += t) {
            sud[j] = -1;
        }

        bckp.push_back(-1);

        for(int j = 1; j < (int) sud.size(); j++) {
            if(sud[j] != -1) {
                bckp.push_back(sud[j]);
            }
        }
        sud = bckp;
        bckp.clear();
    }

    for(int i = 1; i < (int) sud.size(); i++) {
        if(qnt > 10000) break;
        cout << sud[i] << endl;
        qnt++;
    }
}