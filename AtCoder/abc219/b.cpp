#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

string v[3];

int main() {_ 
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    string s; cin >> s;

    for(char c : s) {
        cout << v[c-'0'-1];
    }
    cout << endl;
}