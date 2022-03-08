#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int t; cin >> t;

    while(t--) {
        string s1, s2; cin >> s1 >> s2;

        map<char, int> f;
        for(int i = 0; i < s2.size(); i++) {
            f[s2[i]]++;
        }

        int ans = 0;
        int id = 0;
        while(f[s1[id]]) {
            f[s1[id]]--;
            id++;
            ans++;
        }

        cout << ans << endl;
    }
}