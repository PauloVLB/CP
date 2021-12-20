#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    string s, ss;
    cin >> s >> ss;

    int dif = (26 + s[0] - ss[0])%26;
    
    for(int i = 1; i < (int) s.size(); i++) {
        if((26 + s[i] - ss[i])%26 != dif) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}