#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int n; cin >> n;

    cout << n << ":\n";

    vector<pair<int, int>> ans;
    for(int i = 2; i < n/2 + 2; i++) {
        int outro = i-1;
        if(n%(i + outro) == 0 || n%(i+outro) == i) {
            ans.push_back({i, outro});
        }

        outro++;

        if(n%(i + outro) == 0 || n%(i+outro) == i) {
            ans.push_back({i, outro});
        }
    }

    sort(ans.begin(), ans.end());

    for(auto [i, j] : ans) {
        cout << i << "," << j << endl;
    }
}