#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a = 0;
	string s;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size() && a >= 0; ++i)
			a += s[i] == '{' ? 1 : (s[i] == '}' ? -1 : 0);
		if (a < 0) break;
	}
	cout << (a == 0 ? 'S' : 'N') << endl;
}

