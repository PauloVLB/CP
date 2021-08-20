#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 1005

using namespace std;

int t, a, b, c;

int main() {_ 
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;

        int dif = max(a, b) - min(a, b); 

        int m = 2*dif;

        if(c > m) cout << "-1" << endl;
        else if(m < max(a, b)) cout << "-1" << endl;
        else {
            if(c+dif > m) cout << (c+dif)%m << endl;
            else cout << c+dif << endl;
        }
    }
}