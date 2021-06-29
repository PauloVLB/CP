#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int a, b, c;

int main() {_ 
    cin >> a >> b >> c;
	
	cout << (a+b+c) - max({a,b,c}) - min({a,b,c}) << endl;		
}