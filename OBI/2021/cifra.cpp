#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

string s;
map<char, string> m;

int main() {_ 
    m['a'] = "a"; //
    m['b'] = "bac";
    m['c'] = "cad";
    m['d'] = "def";
    m['e'] = "e"; //
    m['f'] = "feg";
    m['g'] = "geh";
    m['h'] = "hij";
    m['i'] = "i"; //
    m['j'] = "jik";
    m['k'] = "kil";
    m['l'] = "lim";
    m['m'] = "mon";
    m['n'] = "nop";
    m['o'] = "o"; //
    m['p'] = "poq";
    m['q'] = "qor";
    m['r'] = "ros";
    m['s'] = "sut";
    m['t'] = "tuv";
    m['u'] = "u"; //
    m['v'] = "vux";
    m['x'] = "xuz";
    m['z'] = "zuz";

    cin >> s;

    for(char c : s) {
        cout << m[c];
    }
    cout << endl;
}