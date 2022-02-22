#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int v[3];
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0;  j < 3; j++) {
            cin >> v[j];
        }
        sort(v, v+3);
        
        cout << "Case " << i+1 << ": " << v[1] << endl;
    }
}