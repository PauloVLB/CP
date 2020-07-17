#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pii pair<int, int>

using namespace std;

int n, l;
priority_queue<pii, vector<pii>, greater<pii> > pq;
int qnt[10001];

int main() {_
    cin >> n >> l;

    for(int i = 0; i < n; i++) {
        pq.push({0, i+1});
    }

    for(int i = 0; i < l; i++) {
        int t;
        cin >> t;
        pii atual = pq.top(); pq.pop();
        qnt[atual.second]++;
        pq.push({atual.first+t, atual.second});   
    }

    for(int i = 1; i <= n; i++) {
        cout << i << " " << qnt[i] << endl;
    }

    return 0;
}