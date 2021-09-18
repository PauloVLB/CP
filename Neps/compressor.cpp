#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n;
int main() {_   
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        s += ' ';
        char ant = s[0];
        int c = 1;
        for(int j = 1; j < (int) s.size(); j++) {
            if(s[j] != ant) {
                cout << c << " " << s[j-1] << " ";
                c = 0;
            }
            ant = s[j];
            c++;
        }
        cout << endl;
    }
}