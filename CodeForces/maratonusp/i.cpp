#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int n;
vector<int> pt = {0, 15, 12, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

int main() {_ 
    cin >> n;
    vector<int> ans;

    while(n > 0) {
        for(int i = 1; i <= 12; i++) {
            if(n >= pt[i]) {
                ans.push_back(i);
                n -= pt[i];
                break;
            }
        }
    }

    cout << (int) ans.size() << endl;
    for(int x : ans) cout << x << " ";
    cout << endl;
}