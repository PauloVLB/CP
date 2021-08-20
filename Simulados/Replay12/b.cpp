#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

string s;
int n;
int j, o, i;
int main() {_ 
    cin >> n;
    for(int k = 0; k < n; k++) {
        char x; cin >> x;
        if(x == 'J') j++;
        if(x == 'O') o++;
        if(x == 'I') i++;
    }

    while(j--) cout << "J";
    while(o--) cout << "O";
    while(i--) cout << "I";

    cout << endl;
}