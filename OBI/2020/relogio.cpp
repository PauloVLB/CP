#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int r, f, c;

int main() {_ 
    cin >> r >> f >> c;

    if(f > 3*r || c < 95) cout << "diminuir" << endl;
    else if(f < 2*r && c > 97) cout << "aumentar" << endl; 
    else cout << "manter" << endl;
}