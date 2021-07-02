#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1073741824 
#define vi vector<int> 
#define ll long long

using namespace std;

int a, b, c;
vi divisores;
ll s;

int main() {_
    cin >> a >> b >> c;
    
    divisores = vi((a*b*c)+1);

    for(int i = 1; i <= a*b*c; i++) {
        for(int j = i; j <= a*b*c; j += i) {
            divisores[j]++;
        }
    }

    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            for(int k = 1; k <= c; k++) {
                s += divisores[i*j*k];
            }
        }
    }

    cout << s << endl;
}
