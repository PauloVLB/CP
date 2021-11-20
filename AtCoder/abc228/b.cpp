#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n, x;
int ans;
vector<int> ja;
vector<int> v;

void espalha(int x) {
    ja[x] = 1;

    if(!ja[v[x]]) {
        espalha(v[x]);
        ans++;
    }
}

int main() {_ 
    cin >> n >> x;

    ja = vector<int>(n+1, 0);
    v = vector<int>(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    espalha(x);

    cout << ans+1 << endl;
}