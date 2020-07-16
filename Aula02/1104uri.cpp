#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int a, b, x, y;

int main() {_   
    while(cin >> a >> b) {
        set<int> alice, beatriz;
        vector<int> aq, bq;
        if(a == 0 && b == 0) break;
    
        for(int i = 0; i < a; i++) {
            cin >> x;
            alice.insert(x);
        }
        for(int i = 0; i < b; i++) {
            cin >> x;
            beatriz.insert(x);
        }
        
        for(int y : alice) 
            if (beatriz.count(y) == 0) bq.push_back(y);
        
        for(int y : beatriz) 
            if(alice.count(y) == 0) aq.push_back(y);  
        
        cout << min(aq.size(), bq.size()) << endl;
    } 

    return 0;
}