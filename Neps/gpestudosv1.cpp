#include <bits/stdc++.h>

using namespace std;
int n, res;
int v[102];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        bool achou = false;
        for(int j = 0; j < i; j++) {
            if(v[i] == v[j]) {
                achou = true;
            }
        }
        if(!achou) res++;
    }
    cout << res << endl;
}