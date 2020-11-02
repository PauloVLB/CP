#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;
int v[100001], ngr[100001];
stack<int> p;

int main() {_
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];
    v[n] = INT_MAX;

    for(int i = 0; i <= n; i++) {
        while(!p.empty() && v[i] > v[p.top()]) {
            ngr[p.top()] = i;
            p.pop();
        }
        p.push(i); 
    }

    for(int i = 0; i < n - 1; i++) {
        if(v[ngr[i]] == INT_MAX) cout << '*' << ' ';
        else cout << v[ngr[i]] << ' ';
    }
    if(v[ngr[n-1]] == INT_MAX) cout << '*' << endl;
    else cout << v[ngr[n-1]] << endl;
 
    return 0;
}