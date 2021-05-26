#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n;
string s;
stack<char> p;
char x[] = {'A', 'B', 'C'};
char y[] = {'(', ')'};
 
int main() {_
    cin >> n;

    while(n--) {
        cin >> s;
        
        if(s[0] == s.back()) {
            cout << "NO" << endl;
            continue;
        }

        map<char, char> m;
        m[s[0]] = '(';
        m[s.back()] = ')';
        int ans = false;
        for(int i = 0; i < 2; i++) {
            for(char c : x) {
                if(c != s[0] && c != s.back()) m[c] = y[i];
            }      
            
            for(char c : s) {
                if(!p.empty() && m[p.top()] == '(' && m[c] == ')') {
                    p.pop();
                } else {
                    p.push(c);
                }
            }

            if(p.empty()) {
                ans = true;
                break;
            } else {
                while(!p.empty()) p.pop();
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}
