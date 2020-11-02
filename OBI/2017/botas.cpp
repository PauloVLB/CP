#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> e, d;

int main() {
    cin >> n;

    int t, pares = 0;
    char p;

    for(int i = 0; i < n; i++) {
        cin >> t >> p;
        if (p == 'E') {
            auto it = find(d.begin(), d.end(), t); 
            if (it != d.end()) {
                pares++;
                d.erase(it);
            } else {
                e.push_back(t);
            }
        } else {
            auto it = find(e.begin(), e.end(), t); 
            if (it != e.end()) {
                pares++;
                e.erase(it);
            } else  {
                d.push_back(t);
            }
        }
    }

    cout << pares << endl;

    return 0;
}