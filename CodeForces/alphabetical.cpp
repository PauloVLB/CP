#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;
string alpha = "abcdefghijklmnopqrstuvwxyz";
int t; 
string s;

int main() {_
    cin >> t;

    while(t--) {
        cin >> s;

        int t = s.size();
        string ns = "a";
        int tn = 0;
        for(char c : alpha) {
            if(tn == t-1) break;
            int p = s.find(c);
            char next = c+1;

            if(s.find(next) > p) {
                ns = ns + next;
            } else if(s.find(next) < p) {
                ns = next + ns;
            }
            tn++;
        }
        cout << (ns == s ? "YES" : "NO") << endl;
    }
}
