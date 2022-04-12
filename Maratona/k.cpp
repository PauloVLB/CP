#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define vi vector<int>
#define INF 0x3f3f3f3f

using namespace std;

int main() {_ 
    int n; cin >> n;

    vector<string> words;
    set<char> letras;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        words.push_back(s);
        letras.insert(s[0]);
    }

    for(string w : words) {
        int ok = 1;
        for(char c : w) {
            if(!letras.count(c)) {
                ok = 0;
                break;
            }
        }

        if(ok) {
            cout << 'Y' << endl;
            return 0;
        }
    }

    cout << 'N' << endl;

}