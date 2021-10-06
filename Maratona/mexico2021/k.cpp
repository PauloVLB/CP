#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int t;
string x;

bool div2(string k) {
    int last = (int) k.size() - 1;
    return (k[last] == '2' || k[last] == '4' || k[last] == '0' || k[last] == '6' || k[last] == '8');
}

bool div3(string k) {
    int sum = 0;

    for(char c : k) {
        sum += c - '0';
    }

    return sum%3 == 0;
}

bool div4(string k) {
    if((int) k.size() == 1) {
        return (k[0] - '0')%4 == 0;
    }

    int x = 0;
    int tam = (int) k.size()-1;
    string last = "";
    for(int i = tam; i >= tam-1; i--) {
        last += k[i];
    }
    reverse(last.begin(), last.end());
    x = stoi(last);

    return (x == 0 || x%4 == 0);
}

bool div5(string k) {
    int last = (int) k.size() - 1;
    return (k[last] == '0' || k[last] == '5');
}


int main() {_ 
    cin >> t;

    while(t--) {
        cin >> x;

        string eh = "";

        eh += div2(x) ? "2 " : "";
        eh += div3(x) ? "3 " : "";
        eh += div4(x) ? "4 " : "";
        eh += div5(x) ? "5 " : "";
        eh += div2(x) && div3(x) ? "6 " : "";

        if((int) eh.size() == 0){
            cout << -1 << endl;
        } else {
            for(int i = 0; i < (int) eh.size()-1; i++) {
                cout << eh[i];
            }
            cout << endl;
        }
    }
}