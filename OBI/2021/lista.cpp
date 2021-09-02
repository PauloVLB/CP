#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1000005
#define int long long

using namespace std;

int n;
vector<int> l;


int32_t main() {_ 
    cin >> n;
    l = vector<int>(n+2);
    for(int i = 1; i <= n; i++) {
        cin >> l[i];
    }
    l[0] = l[n+1] = 0;

    int ans = 0;
    for(int i = 1; i <= (int) l.size(); i++) {
        int at = l[i], op = l[(int) l.size()-i+1];

        if(at < op) {
            l[i] += l[i+1];
            l.erase(l.begin()+(i));
        } 
        // else if(at > op) {

        // }

        for(int x : l) {
            cout << x << " ";
        }

        cout << endl;
    }
    cout << endl;
}