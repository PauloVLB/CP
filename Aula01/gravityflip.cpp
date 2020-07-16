#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n;
int v[101];

int main() {_
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v+n);

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}