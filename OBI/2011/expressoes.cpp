#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, t;
string l;
stack<char> s;

int main() {_
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l;
        t = l.size();
        bool flag = true;
        for(int j = 0; j < t; j++) {
            char at = l[j];
            if(at == '(' || at == '[' || at == '{') s.push(at);
            else if (
                    (!s.empty()) &&
                    ((at == ')' && s.top() == '(') || 
                    (at == ']' && s.top() == '[') || 
                    (at == '}' && s.top() == '{'))
                    ) 
            {
                s.pop();
            } else {
                flag = false;
                break;
            }
        }

        if(flag && s.empty()) cout << "S" << endl;
        else cout << "N" << endl;

        while(!s.empty()) s.pop();
    }
    return 0;
}