#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

string s;

int main() {_ 
    cin >> s;

    string smax = s;
    string smin = s;
    int n = (int) s.size();
    for(int i = 1; i < n; i++) {
        string t = "";

        for(int j = i; j < n+i; j++) {
            t += s[j%n];
        }

        smax = max(smax, t);
        smin = min(smin, t);
    }

    cout << smin << endl;
    cout << smax << endl;
}