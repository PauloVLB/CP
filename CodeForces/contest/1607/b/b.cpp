#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int t;

int32_t main() {_ 
    cin >> t;


    while(t--) {
        int x, n; cin >> x >> n;

        bool xpar = x%2 == 0;
        bool npar = n%2 == 0;

        int ans = 0;
        int numPares = 0;
        int numImpares = 0;
        int soma = (n*(n+1))/2;

        if(xpar && npar) { 
            cout << x + 1 << endl;
        } else if(xpar && !npar) { 
            int tira = ((n+1)*(n+2))/2;
            cout << (x + (soma) - (tira)) + 1 << endl;
        } else if(!xpar && npar) {
            cout << x << endl;
        } else {
            cout << x + n << endl;
        }   

    }
}