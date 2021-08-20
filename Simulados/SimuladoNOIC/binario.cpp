#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 200005
#define vi vector<int>

using namespace std;

int n, m;
vi v, ord;
int qw;

int main() {_ 
    cin >> n >> m;
    v = vi(n+1);
    ord = vi(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    while(m--) {
        int x; cin >> x;
        v[x] = !v[x];
        ord = v;
        sort(ord.begin(), ord.end());

        cout << (ord == v) << endl;
    }
}