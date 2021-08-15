#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string p;
map<string, char> m;

int main() {_
    m["iu"] = 'q';
    m["ei"] = 'w';
    m["uan"] = 'r';
    m["ue"] = 't';
    m["un"] = 'y';
    m["sh"] = 'u';
    m["ch"] = 'i';
    m["uo"] = 'o';
    m["ie"] = 'p';
    m["ong"] = 's';
    m["iong"] = 's';
    m["ai"] = 'd';
    m["en"] = 'f';
    m["eng"] = 'g';
    m["ang"] = 'h';
    m["an"] = 'j';
    m["uai"] = 'k';
    m["ing"] = 'k';
    m["uang"] = 'l';
    m["iang"] = 'l';
    m["ou"] = 'z';
    m["ia"] = 'x';
    m["ua"] = 'x';
    m["ao"] = 'c';
    m["zh"] = 'v';
    m["ui"] = 'v';
    m["in"] = 'b';
    m["iao"] = 'n';
    m["ian"] = 'm';

    for(int a = 0; a < 26; a++) {
        string ss = "";
        ss += 'a' + a;
        m[ss] = 'a' + a;
    }

    while(getline(cin, p)) {
        p += " ";

        string at = "";
        for(int i = 0; i < p.size(); i++) {
            if(p[i] != ' ') at += p[i];

            if(p[i] == ' ') {
                if(at.size() == 1) {
                    cout << at << at << " ";
                } else if(at.size() == 2) {
                    cout << at << " ";
                } else {
                    if(m.find(at) != m.end()) {
                        cout << at[0] << m[at] << " ";
                    } else {

                        for(int j = 0; j < at.size()-1; j++) {
                            string a = "";
                            string b = "";
                            for(int k = 0; k <= j; k++) {
                                a += at[k];
                            }
                            for(int k = j+1; k < at.size(); k++) {
                                b += at[k];
                            }
                            // cout << a << "-" << b << " ";
                            if(m.find(a) != m.end()) {
                                if(m.find(b) != m.end()) {
                                    cout << m[a] << m[b] << " ";
                                    break;
                                }
                            }

                            // assert();
                        }
                    }
                }

                at = "";
            }
        }
        cout << endl;
    }
    return 0;
}
