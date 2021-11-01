#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int t, d, m;

int main() {_ 
    cin >> t >> d >> m;

    if(m == 0) {
        cout << (t <= d ? "Y" : "N") << endl;
        return 0;
    }

    vector<int> v(m);

    int ans = false;

    for(int i = 0; i < m; i++) {
        cin >> v[i];
    }   

    if(v[0] >= t) ans = true;

    for(int i = 1; i < m; i++) {
        if(v[i] - v[i-1] >= t) ans = true;
    }

    if((d - v.back()) >= t) {
        ans = true;
    }

    cout << (ans ? "Y" : "N") << endl;

}   