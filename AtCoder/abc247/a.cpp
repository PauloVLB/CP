#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;


string s;

int main() {_ 
    cin >> s;

    string n = "0000";

    for(int i = 1; i < 4; i++) {
        if(s[i-1] == '1') {
            n[i] = s[i-1];
        }
    }
    // s[0] = '0';

    cout << n << endl;
}