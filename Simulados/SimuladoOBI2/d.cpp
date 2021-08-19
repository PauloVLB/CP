#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int v[1005], n;
char ans = 'N';

int main() {_
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];
    
    for(int i = 2; i < n; i++) {
        if(v[i-1] > v[i] && v[i] < v[i+1]) ans = 'S';
    }
    cout << ans << endl;
}
