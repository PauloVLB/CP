#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define eb emplace_back
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

string s, x;
map<char, int[14]> ans;
map<char, int> np;
char np_dup;
bool dup;
char d[] = {'C', 'E', 'U', 'P'};

int main() {_ 
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        x += s[i];
        if((i+1)%3 == 0) {
            int xx = stoi(x);
            if(ans[s[i]][xx]) {
                np[s[i]] = -99;
                dup = 1;
            } else {
                ans[s[i]][xx] = 1;
                np[s[i]]++;
            }
            x = "";
        }
    }

    for(int i = 0; i < 4; i++) {
        if(np[d[i]] < 0) {
            cout << "erro" << endl;
        } else {
            cout << 13 - np[d[i]] << endl;
        }
    }
}