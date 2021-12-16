#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int t; cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        if(n%2 == 0) {
            n--;
            cout << n/2 << " " << n/2 + 1 << " " << 1 << endl; 
        } else {
            n--;
            if((n/2)%2 == 0) {
                cout << n/2 - 1 << " " << n/2 + 1 << " " << 1 << endl;
            } else {
                cout << n/2 - 2 << " " << n/2 + 2 << " " << 1 << endl;
            }
        }
    }
}