#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, c;
string l;
stack<char> s;

int main() {_
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l;
        for(int j = 0; j < l.size(); j++) {
            if(l[j] == '<') {
                s.push(l[j]);
            }
            if(l[j] == '>' && !s.empty()) {
                s.pop(); 
                c++;
            }
        }
        cout << c << endl;
        c = 0;
        while(!s.empty()) s.pop();
    }
    return 0;
}
