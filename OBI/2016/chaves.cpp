#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string l;
int x;

int main() {_
    while(getline(cin, l)){
        for(int i = 0; i < l.size(); i++) {
            if(l[i] == '{') {
                x++;
            } else if(l[i] == '}') {
                x--;
            }

            if(x < 0) x = 0;
        }
    }
    cout << (x == 0 ? 'S' : 'N') << endl;
    return 0;
}
