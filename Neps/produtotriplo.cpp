#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long

using namespace std;

int n;
i64 v[200005];
i64 ans;

int main() {_
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << max(v[0]*v[1]*v[n-1], v[n-1]*v[n-2]*v[n-3]) << endl;  
}