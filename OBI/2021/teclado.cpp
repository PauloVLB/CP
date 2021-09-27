#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

string tel;
int m, ans;

int main() {_ 
    map<char, char> kk;

    kk['a'] = '2';
    kk['b'] = '2';
    kk['c'] = '2';
    kk['d'] = '3';
    kk['e'] = '3';
    kk['f'] = '3';
    kk['g'] = '4';
    kk['h'] = '4';
    kk['i'] = '4';
    kk['j'] = '5';
    kk['k'] = '5';
    kk['l'] = '5';
    kk['m'] = '6';
    kk['n'] = '6';
    kk['o'] = '6';
    kk['p'] = '7';
    kk['q'] = '7';
    kk['r'] = '7';
    kk['s'] = '7';
    kk['t'] = '8';
    kk['u'] = '8';
    kk['v'] = '8';
    kk['w'] = '9';
    kk['x'] = '9';
    kk['y'] = '9';
    kk['z'] = '9';

    cin >> tel;
    cin >> m;

    for(int i = 0; i < m; i++) {
        string p; cin >> p;
        if(p.size() != tel.size()) continue;

        int c = 0;
        for(int j = 0; j < (int) p.size(); j++) {
            if(tel[j] == kk[p[j]]) c++;
        }

        if(c == (int) tel.size()) ans++;
    }

    cout << ans << endl;
}