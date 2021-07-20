#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 200005 
#define int long long

using namespace std;

int n, k, x;
int a[MAX];

int32_t main() {_
    cin >> n >> k >> x;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);
    
    int g = 0;
    vector<int> sep;

    for(int i = 0; i < n-1; i++) {
        if(a[i+1] - a[i] > x) {
            g++;
            sep.push_back(a[i+1]-a[i]);
        }
    }

    sort(sep.begin(), sep.end());

    for(int y : sep) {
        int continua = (y-1)/x;
        if(continua > k) break;
        else {
            k -= continua;
            g--;
        }
    }

    cout << g+1 << endl;
    return 0;
}
