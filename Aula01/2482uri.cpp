#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m;
map<string, string> ma;

string lingua, trad, nome, la; 

int main() {_
    cin >> n;

    getline(cin, la);
    for(int i = 0; i < n*2; i++) {
        getline(cin, la);
        if(i%2 == 0) {
            lingua = la;
        } else {
            trad = la;
            ma[lingua] = trad;
        }
    }

    cin >> m;
    getline(cin, la);
    for(int i = 0; i < m*2; i++) {
        if(i%2 == 0) {
            getline(cin, nome);       
        } else {
            getline(cin, lingua);
            cout << nome << endl;
            cout << ma[lingua] << endl;  
            cout << endl;   
        }                     
    }
    return 0;
}