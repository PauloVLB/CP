#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n;
string s;
string q = "IO";

int main() {_ 
    cin >> n;

    string ioi = "";
    for(int i = 0; i < n; i++) {
        ioi += q[i%2];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        char x; cin >> x;
        if(x != ioi[i]) ans++;
    }

    cout << ans << endl;
}