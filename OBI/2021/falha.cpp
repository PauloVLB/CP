#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n;
vector<string> ss;

int main() {_ 
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        ss.push_back(s);
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(ss[i].find(ss[j]) != string::npos) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}