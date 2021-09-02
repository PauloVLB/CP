#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n;
string p;
map<string, int> m;

int main() {_ 
    cin >> n;
    cin >> p;

    string at = "";
    vector<string> v;
    for(int i = 0; i < n/2; i++) {
        at += p[i];
        sort(at.begin(), at.end());

        string test = "";
        for(int j = i+1; j < n; j++) {
            test += p[j];

            if((int) test.size() == i+1) {
                sort(test.begin(), test.end());
                cout << test << " ";
                if(test == at) {
                    // cout << test << " ";
                    cout << "sim" << endl;
                    v.push_back(test);
                    m[test]++;
                    test = "";
                    continue;
                } else {
                    cout << "nao" << endl;
                    break;
                }
                
            }
            // cout << endl;
        }
    }

    string ans = "*";
    int me = INF;
    for(auto [k, v] : m) {
        if(v == (n/(int) k.size()) - 1) {
            if((int) k.size() < me) {
                me = k.size();
                ans = k;
            }
            break;
        }
    }

    if(ans == "*") {
        cout << ans << endl; 
        return 0;
    }
    for(int i = 0; i < me; i++) {
        cout << p[i];
    }
    cout << endl;
}