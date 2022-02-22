#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int me = INT_MAX;
        vector<int> v(n+1), id(n+1);
    
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
            id[v[i]] = i;
        }

        int ini = 0;
        int fim = 0;
        for(int i = 1; i <= n; i++) {
            if(i != v[i]) {
                ini = i;
                fim = id[i];
                break;
            }
        }

        reverse(v.begin()+ini, v.begin()+fim+1);

        // cout << "la " << ini << " " << fim << endl;
        for(int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }

        cout << endl;
    }
}