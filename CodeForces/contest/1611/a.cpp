#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        string n;
        cin >> n;

        int t = (int) n.size();

        int last = n[t-1] - '0';
        int fs = n[0] - '0';
        if(last%2 == 0) {
            cout << 0 << endl;
        } else if(fs%2 == 0) {
            cout << 1 << endl;
        } else {
            int ans = -1;
            for(int i = 0; i < t; i++) {
                int curr = n[i] - '0';
                if(curr%2 == 0) {
                    ans = 2;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}