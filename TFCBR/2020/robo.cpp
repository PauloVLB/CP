#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, m, xi, yi, k, l, x, y;

vector<int> lin[100005];
vector<int> col[100005];

int main() {_ 
    cin >> n >> m >> xi >> yi >> k >> l;

    for(int i = 0; i < k; i++) {
        cin >> x >> y;
        lin[x].push_back(y);
        col[y].push_back(x);
    }
    for(int i = 1; i <= n; i++) {
        lin[i].push_back(0);
        lin[i].push_back(m+1);
        sort(lin[i].begin(), lin[i].end());
    }
    for(int i = 1; i <= m; i++) {
        col[i].push_back(0);
        col[i].push_back(n+1);
        sort(col[i].begin(), col[i].end());
    }

    int curX = xi;
    int curY = yi;
    for(int i = 1; i <= l; i++) {
        if(i%2 != 0 && i%4 == 1) { // procura um MAIOR horizontalmente
            for(int j = 0; j < lin[curX].size(); j++) {
                if(lin[curX][j] > curY) {
                    curY = lin[curX][j]-1;
                    break;    
                } 
            }
        }
        if(i%2 != 0 && i%4 == 3) { // procura um MENOR horizontalmente
            for(int j = lin[curX].size()-1; j >= 0; j--) { 
                if(lin[curX][j] < curY) {
                    curY = lin[curX][j]+1;
                    break;    
                } 
            }
        }
        if(i%2 == 0 && i%4 == 2) { // procura um MAIOR verticalmente
            for(int j = 0; j < col[curY].size(); j++) {
                if(col[curY][j] > curX) {
                    curX = col[curY][j]-1;
                    break;    
                } 
            }
        }
        if(i%2 == 0 && i%4 == 0) { // procura um MENOR verticalmente
            for(int j = col[curY].size()-1; j >= 0; j--) {
                if(col[curY][j] < curX) {
                    curX = col[curY][j]+1;
                    break;    
                } 
            }
        }
    }   
    cout << curX << " " << curY << endl;
}