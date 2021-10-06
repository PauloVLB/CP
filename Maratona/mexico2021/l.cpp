#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int t;

void f(int k) {
    if(k == 1) {
        cout << '2'; 
    } else if(k%2 == 0) {
        cout << "(";
        f(k/2);
        cout << ")^2";
    } else {
        cout << "(2*";
        f(k-1);
        cout << ")";
    }
}

int32_t main() {_ 
    cin >> t;

    while(t--) {
        int k; cin >> k;
        f(k);
        cout << endl;        
    }
}