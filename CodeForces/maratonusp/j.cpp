#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int n;
int main() {_ 
    cin >> n;

    int a, b; cin >> a >> b;
    int dif = a - b;

    for(int i = 1; i < n; i++) {
        int a, b; cin >> a >> b;
        if(a-b != dif) {
            cout << "mentiu a idade" << endl;
            return 0;
        }   
    }

    cout << "idades corretas" << endl;
}