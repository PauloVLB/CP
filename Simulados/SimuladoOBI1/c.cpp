#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int c[4];
char ans = 'F';

int main() {_
    for(int i = 0; i < 4; i++) cin >> c[i];
        
    if((c[0] == c[2] && c[1] != c[3]) || (c[1] == c[3] && c[0] != c[2])) {
        ans = 'V';
    } 
    cout << ans << '\n';
}