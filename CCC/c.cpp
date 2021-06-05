#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n;
int bx, sx = 105, by, sy = 105, x, y;
string c;

int main() {_ 
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> c;
        x = stoi(c.substr(0, c.find(","))); 
        y = stoi(c.substr(c.find(",")+1, c.size()));
        bx = max(bx, x);
        sx = min(sx, x);
        by = max(by, y);
        sy = min(sy, y);
    }

    cout << sx - 1 << "," << sy-1 << endl;
    cout << bx+1 << "," << by+1 << endl;
}   