#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int t[1000005], n, a, ans;

int main(){_
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(t[a]) {
            t[a] -= 2;
        } else {
            t[a] += 2;
        }
        ans += t[a];
    }        

    cout << ans << endl;
}