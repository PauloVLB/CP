#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define endl '\n'

using namespace std;

int main() {_ 
    int x, y; cin >> x >> y;

    double dist = sqrt(x*x + y*y);
    
    double sen = y/dist;
    double cos = x/dist;

    cout << fixed << setprecision(9);
    cout << cos << " " << sen << endl;

}