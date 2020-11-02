#include <iostream>

using namespace std;
int n, t;

int main() {
    cin >> n >> t;

    if(t == 0) cout << n << endl;
    if(t == 1) cout << n*(n-1) << endl;
    if(t == 2) cout << (n*(n-1)*(n-2))/6 << endl; 

    return 0;
}
