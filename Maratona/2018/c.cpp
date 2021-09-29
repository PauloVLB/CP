#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define int long long
#define ii pair<int, int>
#define fs first
#define sc second
#define pb push_back

using namespace std;
using namespace __gnu_pbds;

int x, y, h, v;

typedef tree<
int,
null_type,
greater<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

int32_t main() {_ 
    cin >> x >> y;
    cin >> h >> v;

    int ans = (h+1)*(v+1);

    vector<ii> hor(h), ver(v);

    for(int i = 0; i < h; i++) {
        cin >> hor[i].fs >> hor[i].sc;
    }

    sort(hor.begin(), hor.end());

    for(int i = 0; i < v; i++) {
        cin >> ver[i].fs >> ver[i].sc;
    }

    sort(ver.begin(), ver.end());

    ordered_set oH, oV;

    for(ii cord : hor) {
        ans += oH.order_of_key(cord.sc);
        oH.insert(cord.second);
    }

    for(ii cord : ver) {
        ans += oV.order_of_key(cord.sc);
        oV.insert(cord.second);
    }

    cout << ans << endl;
}