#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005

using namespace std;

int n, c, v[MAX], p, ii, x;

int main() {_
    cin >> n >> c;

    for(int i = 1; i <= c; i++) {
        cin >> p >> ii;
        for(int j = 1; j <= ii; j++) {
            cin >> x;
            v[x] = p;
        }
    }
    
    for(int i = 1; i <= n; i++) {
        if(!v[i]) {
            cout << i << endl; 
        }
    }
}