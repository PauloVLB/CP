#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

void pode0(string s) {
    vector<int> v(3);

    for(int i =0; i < s.size(); i++) {
        v[s[i] - 'A']++;
    }

}

int outro(int a, int b) {
    if(a+b == 4) return 2;
    if(a+b == 3) return 3;

}

void pode1(string s) {
    vector<int> pref(3);
    vector<int> suf(3);
    int a, b, c;
    a = b = c = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A') {
            a++;
            pref[0] = i;
        }
        else if(s[i] == 'B') {
            b++;
            pref[1] = i;
        }
        else {
            c++;
            pref[2] = i;
        }
    }

    a = b = c = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A') {
            a++;
            suf[0] = i;
        }
        else if(s[i] == 'B') {
            b++;
            suf[1] = i;
        }
        else {
            c++;
            suf[2] = i;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) continue;
            if(pref[i] < suf[i]) {
                cout << 1 << endl;
                cout << i+2 << " " << j << " " << outro(i, j) << endl;
                exit(0);
            }
        }
    }
}



int32_t main() {_ 
    int n; cin >> n;
    string s; cin >> s;
    pode0(s);
    pode1(s);
    pode2(s);
}