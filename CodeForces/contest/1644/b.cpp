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

        vi v;
        for(int i = n; i >= 1; i--) {
            v.push_back(i);
        } 

        for(int x : v) {
            cout << x << " ";
        }
        cout << endl;

        for(int i = 0; i < n-1; i++) {
            swap(v[i], v[i+1]);

            if(i >= 1 && v[i] + v[i-1] == n) {
                // cout << "ó: " << endl;
                if(n == 3) {
                    cout << "3 1 2" << endl;
                    continue;
                }
                cout << "1 2 " << n << " ";
                for(int i = n-4; i >= 0; i--) {
                    if(v[i] == n) cout << "3 ";
                    else cout << v[i] << " ";
                }
                cout << endl;
                continue;
            }

            for(int x : v) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}