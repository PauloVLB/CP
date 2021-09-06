#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n;
set<string> s = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

int main() {_ 
    cin >> n;

    int ans = 0;

    for(int i = 0; i < n; i++) {
        string x; cin >> x;
        try{
            int xx = stoi(x);   
            if(xx < 18) ans++;
        } catch(exception e) {
            if(s.find(x) != s.end()) ans++;
        }
    }

    cout << ans << endl;
}