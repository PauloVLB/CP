#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int x;

int main() {_ 
    cin >> x;

    if(x%100 == 0 && x != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}