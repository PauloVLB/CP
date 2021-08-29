#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 200005

using namespace std;

int t, n;
int a[MAX];

int main() {_ 
    cin >> t;

    while(t--) {
        cin >> n;
        int impar = 0, qp = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2 == 0) {
                qp++;
            } else {
                impar = 1;
            }
        }

        if(impar) cout << qp << endl;
        else cout << -1 << endl;
    }
}