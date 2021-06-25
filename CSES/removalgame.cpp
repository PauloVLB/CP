#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 5005
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>

using namespace std;

ll n, s;
ll v[MAX];
vvi memo(MAX, vi(MAX, -1));

ll dp(int c, int f) {
    if(f == c) return v[f];

    if(memo[c][f] != -1) return memo[c][f];

    return memo[c][f] = max(v[c] - dp(c+1, f), v[f] - dp(c, f-1));
}

int main() {_ 
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        s += v[i];
    }

    cout << (s+dp(1, n))/2 << endl;
}