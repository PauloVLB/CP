#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define INF 0x3f3f3f3f
#define int long long

using namespace std;

int x, y;
int tem_xy(vector<int> v) {
    int l = 0;
    int r = 0;
    int n = (int) v.size();
    int ans = 0;
    int qx = 0;
    int qy = 0;

    while(l < n) {
        while(r < n && (qx == 0 || qy == 0)) {
            if(v[r] == x) {
                qx++;
            }
            if(v[r] == y) {
                qy++;
            }
            r++;
        }
        if(qx > 0 && qy > 0) {
            ans += n + 1 - r;
        }

        if(v[l] == x) {
            qx--;
        }
        if(v[l] == y) {
            qy--;
        }
        l++;
    }

    return ans;
}

int32_t main() {_ 
    int n; cin >> n >> x >> y;

    vector<int> a;

    vector<vector<int>> vv = vector<vector<int>>(n);

    int last_v = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;    
        if(y <= ai && ai <= x) {
            vv[last_v].push_back(ai);
        } else {
            last_v++;
        }
    }

    int ans = 0;    

    int i = 0;
    for(vector<int> v : vv) {
        if(v.size() == 0) continue;
        ans += tem_xy(v);
    }

    cout << ans << endl;
}