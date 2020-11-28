#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int ans, l, c, p, x, y;

vector<int> pos;

int main() {_
    cin >> l >> c >> p;

    pos.push_back(0);
    for(int i = 0; i < p; i++) {
        cin >> x >> y;
        pos.push_back(y);
        
    }
    pos.push_back(c+1);

    sort(pos.begin(), pos.end());

    for(int i = 0; i <= p; i++) {
        int distProx = pos[i+1] - pos[i] - 1;
    
        if(distProx == 0) continue;
        if(distProx <= 2) ans++;
        if(distProx > 2) ans+=2;
    }
    cout << ans << endl;
}
