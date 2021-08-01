#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define int long long

using namespace std;

int n, l, ans;

int32_t main(){_ 
    cin >> l >> n;
    int maxt = l - n + 1;
    cout << maxt*maxt + (n-1) << endl;
}