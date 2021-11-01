#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n, k;

int main() {_ 
    cin >> n >> k;

    vector<int> v(n);
    vector<int> c(n+1);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        cin >> c[v[i]];
    }

    vector<int> ord = v;
    sort(ord.begin(), ord.end());

    char ans = 'Y';
    for(int i = 0; i < n; i++) {
        if(c[v[i]] != c[ord[i]]) {
            ans = 'N';
            break;
        }
    }

    cout << ans << endl;
}