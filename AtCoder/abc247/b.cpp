#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int n; cin >> n;

    vector<string> s(n), t(n);

    for(int i = 0; i < n; i++) {
        cin >> s[i] >> t[i];
    }

    for(int i = 0; i < n; i++) {
        int s_dif = 1;
        int t_dif = 1;

        for(int j = 0; j < n; j++) {
            if(j == i) continue;
            if(s[i] == s[j] || s[i] == t[j]) {
                s_dif = 0;
                break;
            }
        }

        for(int j = 0; j < n; j++) {
            if(j == i) continue;
            if(t[i] == t[j] || t[i] == s[j]) {
                t_dif = 0;
                break;
            }
        }
        
        if(!s_dif && !t_dif) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}