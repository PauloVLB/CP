#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define INF 1e9+7
#define vi vector<int>
#define vvi vector<vi>
#define MAX 10005

using namespace std;

int n, t[105];
int f1, f2;

int main() {_
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> t[i];
    }

    sort(t, t+n+1);

    f1 += t[n];
    for(int i = n-1; i >= 1; i--) {
        if(f1 > f2) {
            f2 += t[i];
        } else {
            f1 += t[i];
        }
    }
    cout << max(f1, f2) << endl;
}