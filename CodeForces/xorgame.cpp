#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t;

int main() { 
    cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        
        if((a^b) == (a+b)){
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }    
}