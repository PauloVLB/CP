#include <iostream>
#include <string>

using namespace std;

string p, s;

int main() {
    getline(cin, p);

    for(int i = 1; i < p.size(); i+=2) {
        cout << p[i];
        if(p[i+1] == ' ') {
            i++;
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}