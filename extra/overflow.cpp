#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int a, b, n;
char o;

int main() {_
    cin >> n >> a >> o >> b;
    
    if(o == '+') cout << (a+b > n ? "OVERFLOW" : "OK") << endl;
    if(o == '*') cout << (a*b > n ? "OVERFLOW" : "OK") << endl;        
}