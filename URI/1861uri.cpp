#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

map<string, vector<string>> m;
vector<string> vtms;
int main() {_
    string l;
    while(getline(cin, l)) {
        int del = l.find(" ");
        string ass = l.substr(0, del);
        string vtm = l.substr(del+1, l.size());
        
        m[ass].push_back(vtm);
        vtms.push_back(vtm);
    }
    
    for(auto x : vtms) {
        m[x].clear();
    }

    cout << "HALL OF MURDERERS" << endl;

    for(auto x : m) {
        int qnt = x.second.size();
        if(qnt > 0) cout << x.first << " " << qnt << endl;
    }

    return 0;
}