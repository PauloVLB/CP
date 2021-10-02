#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

string s, t;

int main() {_ 
    cin >> s >> t;

    string ans = "No";
    
    if(s == t) {
        ans = "Yes";
    }

    for(int i = 0; i < (int) s.size() - 1; i++) {
        string temp = s;
        swap(temp[i], temp[i+1]);

        if(temp == t) {
            ans = "Yes";
            break;
        }
    }

    cout << ans << endl;
}