#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int n;
map<int, int> m;

int main() {_ 
    cin >> n;

    vector<int> soma(n+1);
    soma[0] = 0;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        soma[i] = soma[i-1] + x;
    }

    int quero = soma[n]/3;

    int j = 0;
    int k = 0;
    int ans = 0;
    for(int i = 0; soma[i] + 2*quero <= soma[n-1]; i++) {
        while(soma[j] < soma[i] + quero) j++;
        while(soma[k] < soma[i] + 2*quero) k++;
        if(soma[j] == soma[i] + quero && soma[k] == soma[i] + 2*quero) ans++;
    }

    cout << ans << endl;
}