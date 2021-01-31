#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

using namespace std;

int n;
vector<int> v; 

int main() {_ 
    cin >> n;

    v = vector<int>(n, -1);
    
    for(int &x : v) {
        cin >> x;
    }

    for(int y : v) {
        cout << y << " ";
    }
    cout << endl;
    

}