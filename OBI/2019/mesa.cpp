#include <iostream>

using namespace std;

int a, b;

int main() {
    cin >> a >> b;

    a %= 3;
    b %= 3;
    if(a == b){
        b = (b+1)%3;
    }
    cout << 3 - (a+b) << endl;

    return 0;
}