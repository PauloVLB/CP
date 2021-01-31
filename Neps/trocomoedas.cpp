#include <bits/stdc++.h>

using namespace std;

int n, x, b;
int c[6] = {100, 50, 25, 10, 5, 1};
int ans[7]; 
int main() {
	cin >> n;
   	for(int i = 0; i < 6; i++){
    	x = n/c[i];
        ans[0] += x;
        ans[i+1] = x;
        n %= c[i];
    }

    for(int a : ans) {
        cout << a << endl;
    }
}