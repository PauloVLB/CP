#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int is_distinct(string n) {
    set<char> tem;
    for(int i = 0; i < (int) n.size(); i++) {
        if(tem.count(n[i])) {
            return 0;
        }
        tem.insert(n[i]);
    }

    return 1;
}

int main() {_ 
    string n; cin >> n;

    n = to_string(stoi(n) + 1);
    while(!is_distinct(n)) {
        n = to_string(stoi(n) + 1);
    }

    cout << n << endl;
}