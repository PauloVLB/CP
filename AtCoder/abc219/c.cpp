#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define ii pair<int, int>
#define fs first
#define sc second
#define MAX 50005

using namespace std;

string alph;
string v[MAX];
map<char, vector<string>> m;
map<char, char> r, b;
vector<string> ord;

int main() {_ 
    for(int i = 0; i < 26; i++) {
        char aa; cin >> aa;
        r[aa] = 'a'+i;
        b['a'+i] = aa;
    }

    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        string nome; cin >> nome;
        string novo = "";
        for(int j = 0; j < (int) nome.size(); j++) {
            novo += r[nome[j]];
        }
        ord.pb(novo);
    }

    sort(ord.begin(), ord.end());

    for(string s : ord) {
        for(char c : s) {
            cout << b[c];
        }
        cout << endl;
    }
}