#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define ii pair<int, int>
#define fs first
#define sc second
#define debug(args...) printf(args)

using namespace std;


string l, a;
int x;
vector<int> v;
stack<ii> p;

int main() {_
    while(getline(cin, l)) {
        stringstream ss;
        ss << l;
        while(ss >> a) {
            v.push_back(stoi(a));
        }
        bool flag = true;
        int s = 0;
        for(int b : v) {
            if(b < 0) {
                p.push({b, 0});
            } else {
                if(!p.empty() && p.top().fs == -b && p.top().sc > p.top().fs) {
                    int x = p.top().fs; p.pop();
                    if(!p.empty()) p.top().sc += x;
                } else {
                    flag = false;
                    break;
                }
            }
        }
        
        if(p.empty() && flag) {
            cout << ":-) Matrioshka!" << endl;
        } else {
            cout << ":-( Try again." << endl;
            while(!p.empty()) p.pop();
        }
        
        v.clear();
    }
}
