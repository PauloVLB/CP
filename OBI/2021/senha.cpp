#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n, m, k, p;
int main() {_ 
    cin >> n >> m >> k;

    string s; cin >> s;

    vector<string> vv;
    
    for(int i = 0; i < m; i++) {
        string xx; cin >> xx;
        vv.push_back(xx);
    }

    queue<string> q;
    q.push("");

    int t = 0;
    for(string x : vv) {
        while((int) q.front().size() == t) {
            string frente = q.front();
            for(char c : x) {
                q.push(frente+c);
            }
            q.pop();
        }
        t++;
    }

    vector<string> ss;
    while(!q.empty()) {
        ss.push_back(q.front());
        q.pop();
    }

    sort(ss.begin(), ss.end());

    cin >> p;

    string seq = ss[p-1];
    int idd = 0;
    for(char c : s) {
        if(c == '#') {
            cout << seq[idd++];
        } else {
            cout << c;
        }
    }
    cout << endl;
}