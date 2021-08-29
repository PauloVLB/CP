#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 100005 

using namespace std;

int t, n;
string s;
string dir = "ESWN";
char ans;

int main() {_ 
    cin >> t;

    while(t--) {
        cin >> n;
        int id = 0;
        for(int i = 0; i < n; i++) {
            char x; cin >> x;
            if(x == '1') {
                id = (id + 3)%4;
                ans = dir[id];
            } else {
                id = (id + 1)%4;
                ans = dir[id];
            }
        }
        cout << ans << endl;
    }
}