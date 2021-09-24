#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

string s;

int main() {_ 
    cin >> s;

    cout << count(s.begin(), s.end(), '1') << endl;
}