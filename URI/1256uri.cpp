#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m, c;
char slash = (char) (92);
vector<int> v[202];

int main() {_
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m >> c;
        for(int j = 0; j < c; j++) {
            int a;
            cin >> a;
            v[a%m].push_back(a);
        }
        for(int j = 0; j < m; j++) {
            cout << j;
            for(int x : v[j]) {
                cout << " -> " << x;
            }
            v[j].clear();
            cout << " -> " << slash << endl;
        }
        if(i != n-1) cout << endl;
    }
 
    return 0;
}