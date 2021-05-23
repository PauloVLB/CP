#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

// (b + delta) - a = d - (c + delta)
// b + delta - a = d - c - delta
// 2delta = d - c - b + a
// delta = (a - b - c + d)/2

string s;

int main() {_ 
    getline(cin, s);

    int hpA = stoi(s.substr(0, 2));
    int mpA = stoi(s.substr(3, 5));
    int hcB = stoi(s.substr(6, 8));
    int mcB = stoi(s.substr(9, 11));
    int hpB = stoi(s.substr(12, 14));
    int mpB = stoi(s.substr(15, 17));
    int hcA = stoi(s.substr(18, 20));
    int mcA = stoi(s.substr(21, 23));
    
    int a = hpA*60 + mpA;
    int b = hcB*60 + mcB;
    int c = hpB*60 + mpB;
    int d = hcA*60 + mcA;

    int delta = -1*((a - b - c + d)/2);

    cout << abs(hcB*60 - hpA*60 - delta) << ' ' << delta/60 << endl;
}