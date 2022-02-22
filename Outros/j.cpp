#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int n; cin >> n;
    
    int qntA = 0;
    int qntB = 0;
    int qntC = 0;

    set<pair<int, char>> s;
    set<int> indexC;

    vector<char> ss;

    for(int i = 0; i < 2*n; i++) {
        char c; cin >> c;

        ss.push_back(c);

        if(c == 'C') {
            indexC.insert(i);
        }

        qntA += c == 'A';
        qntB += c == 'B';
        qntC += c == 'C';
    }


    int numeAB = (qntA + qntB - qntC);
    int numeAC = (qntA - qntB + qntC);
    int numeBC = (qntB + qntC - qntA);
    
    if(numeAB%2 != 0 || numeBC%2 != 0 || numeAC%2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    int qntAB = numeAB/2;
    int qntAC = numeAC/2;
    int qntBC = numeBC/2; 

    if(qntAB < 0 || qntBC < 0 || qntAC < 0) {
        cout << "NO" << endl;
        return 0;
    }

    vector<pair<int, int>> ans;

    set<int> sobrando;

    for(int i = 0; i < 2*n; i++) {
        if(ss[i] == 'B') {
            bool flag = false;
            while(!indexC.empty()) {
                auto id = *indexC.begin();
                indexC.erase(id);
                if(id > i) {
                    flag = true;
                    ans.push_back({i+1, id+1});
                    break;
                } else {
                    sobrando.insert(id);
                }
            }
            if(!flag) {
                sobrando.insert(i);
            }
        }
    }

    for(int i = 0; i < 2*n; i++) {
        if(ss[i] == 'A') {
            if(sobrando.empty()) {
                cout << "NO" << endl;
                return 0;
            }

            auto id = *sobrando.begin();

            if(id < i) {
                cout << "NO" << endl;
                return 0;
            } 

            ans.push_back({i+1, id+1});
            sobrando.erase(id);
        }
    }   

    cout << "YES" << endl;

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    // sort(ans.begin(), ans.end());

}