#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vi imp, par;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x%2 == 0) {
                par.push_back(x);
            } else {
                imp.push_back(x);
            }
        }

        vi par_ord = par;
        vi imp_ord = imp;
        sort(par_ord.begin(), par_ord.end());
        sort(imp_ord.begin(), imp_ord.end());

        cout << ((par_ord == par) && (imp_ord == imp) ? "Yes" : "No") << endl;
    }
}