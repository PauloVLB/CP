#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

using namespace std;

int n, x;

set<int> cj;

/*
8
1 3 4 5 10
*/

int main() {_ 
    cin >> n;

    while(n--) {
        cin >> x;
        cj.insert(x);
    } 
    
    if(cj.count(3)) {
        cout << "existe" << endl;
    } else {
        cout << "não existe" << endl;
    }
}