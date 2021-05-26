#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;


string l, a;
int x;
vector<int> v;
stack<int> p;
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
                if(!p.empty() && p.top() > b) {
                    flag = false;
                    break;
                }
                p.push(b);
            } else if(!p.empty()){
                if(p.top() == b*-1) {
                    p.pop();
                }
            } else {
                flag = false;
                break;
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
