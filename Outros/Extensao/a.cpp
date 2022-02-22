#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;

        if(a < b) {
            cout << "<" << endl;
        } else if(a > b) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    }
}