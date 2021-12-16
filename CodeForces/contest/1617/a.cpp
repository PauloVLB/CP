#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        string s, t;
        cin >> s >> t;

        int qnt_a = count(s.begin(), s.end(), 'a');
        int qnt_b = count(s.begin(), s.end(), 'b');
        int qnt_c = count(s.begin(), s.end(), 'c');
        sort(s.begin(), s.end());
        
        if(t[0] == 'a' && qnt_a != 0) {
            while(qnt_a--) cout << 'a';
            if(t[1] == 'b') {
                while(qnt_c--) cout << 'c';
                while(qnt_b--) cout << 'b';
            } else {
                while(qnt_b--) cout << 'b';
                while(qnt_c--) cout << 'c';
            }
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c') continue;
                cout << s[i];
            }
            cout << endl;
        } else {
            cout << s << endl;
        }
    }
}