#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int c, d;
int v[5];

int main() {_ 
    cin >> v[0];
    for(int i = 1; i < 5; i++) {
        cin >> v[i];
        if(v[i] > v[i-1]) c++;
        else if(v[i] < v[i-1]) d++;
    }
   // cout << c << ' ' << d << endl;

    if(c == 4) cout << 'C' << endl;
    else if(d == 4) cout << 'D' << endl;
    else cout << 'N' << endl;
}