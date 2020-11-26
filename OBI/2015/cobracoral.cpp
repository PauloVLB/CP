#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int v[4];
char ans = 'F';

int main() {_
    for(int i = 0; i < 4; i++) {
        cin >> v[i];
    }    

    if((v[0] == v[2] && v[1] != v[3]) || (v[1] == v[3] && v[0] != v[2])) {
        ans = 'V';
    } 

    cout << ans << endl;

}