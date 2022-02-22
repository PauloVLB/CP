#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int32_t main() {_ 
    int n; cin >> n;

    string s1, s2; cin >> s1 >> s2;

    int r = 0;
    int tot = 0;

    for(int l = 0; l < n; l++) {
        r = max(r, l);
        while(r < n && s1[r] == s2[r]) {
            r++;
        }

        if(r < n && s1[r] < s2[r]) {
            tot += n-r;
        }
    }

    cout << tot << endl;

}