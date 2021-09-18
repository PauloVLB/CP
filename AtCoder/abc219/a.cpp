#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int x;

int main() {_ 
    cin >> x;

    if(x < 40) {
        cout << 40 - x << endl;
    } else if(x < 70) {
        cout << 70 - x << endl;
    } else if(x < 90) {
        cout << 90 - x << endl;
    } else {
        cout << "expert" << endl;
    }
}