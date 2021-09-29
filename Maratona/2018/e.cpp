#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

string cod, wrd;

int main() {_ 
    cin >> wrd >> cod;

    int twrd = wrd.size();
    int tcod = cod.size();

    int ans = 0;
    
    for(int i = 0; i < twrd - tcod + 1; i++) {
        bool temeq = false;
        for(int j = 0; j < tcod; j++) {
            if(cod[j] == wrd[i+j]) {
                temeq = true;
                break;
            }
        }
        if(!temeq) {
            ans++;
        }
    }

    cout << ans << endl;
}