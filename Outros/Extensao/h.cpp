#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    string s;
    int t = 1;
    while(cin >> s) {
        cout << "Case " << t++ << ":\n";
        vi sum((int) s.size() + 1);
        sum[0] = 0;
        for(int i = 0; i < (int) s.size(); i++) {
            sum[i+1] = sum[i] + (s[i] == '1');
        }

        int q; cin >> q;

        while(q--) {
            int l, r; cin >> l >> r; l++, r++;
            int ss = sum[r] - sum[l-1]; 
            if(ss == 0 || ss == r - l + 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}