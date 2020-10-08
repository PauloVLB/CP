#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 1000005

using namespace std;


int n, menor, p[MAX];
string s;

int main() {_
    cin >> n >> s;

    for(int i = 1; i < n; i++) {
        p[i] = s[i-1] == 'A' ? p[i-1] + 1 : p[i-1] - 1;
        menor = min(menor, p[i]);
    }

    for(int i = 0; i < n; i++) {       
        cout << p[i] - menor << " ";       
    }
    cout << endl;

    return 0;
}