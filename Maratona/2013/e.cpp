#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int r, n;
int main() {_ 
    cin >> r >> n;

    vector<int> v(r+1, -1);

    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        v[x] = 1;
    }

    int ast = 1;
    for(int i = 1; i <= r; i++) {
        if(v[i] == -1) {
            cout << i << " ";
            ast = 0;
        }
    }
    if(ast) {
        cout << '*' << endl;
    } else {
        cout << endl;
    }
}