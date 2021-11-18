#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int a, b, c;

int main() {_ 
    cin >> a >> b >> c;

    if(a == b && c != a) {
        cout << 'C' << endl;
    } else if(a == c && b != a) {
        cout << 'B' << endl;
    } else if(b == c && a != b) {
        cout << 'A' << endl;
    } else {
        cout << '*' << endl;
    }
}