#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define pb push_back
#define int long long

using namespace std;

int n, a;

int32_t main() {_ 
    cin >> n >> a;
    set<int> cje;
    set<int, greater<int> > cjd;
    vector<char> s;

    cje.insert(0); cjd.insert(0);
    cje.insert(n+1); cjd.insert(n+1);
    
    int qp = 0;
    for(int i = 1; i <= n; i++) {
        char c; cin >> c;
        if(c == '#') {
            qp++;
            cje.insert(i);
            cjd.insert(i);
        }
    }
    int ans = 0;
    bool dir = 1; // 1 right 0 left

    while(qp) {
        if(dir){ 
            auto it = cje.upper_bound(a);
            
            ans += abs(*it - a);
            a = *it;

            if(*it != n+1 && *it != 0) {
                qp--;   
                cjd.erase(cjd.find(*it));
                cje.erase(it);
            }
        } else {
            auto it = cjd.upper_bound(a);
            
            ans += abs(*it - a);
            a = *it;
            
            if(*it != n+1 && *it != 0) {
                qp--;   
                cje.erase(cje.find(*it));
                cjd.erase(it);
            }
        }
        dir = !dir;
    }
 
    cout << ans << endl;
}