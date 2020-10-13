#include <bits/stdc++.h>
using namespace std;

int main()
{
	int input;
	int f = 0;

	cin >> input;
	vector<string> v(input);

	for(int i=0; i<input; i++) {
		cin >> v[i];

		if(v[i][0] == 'T')
			f += 4;
		if(v[i][0] == 'D')
			f += 12;
		if(v[i][0] == 'O')
			f += 8;
		if(v[i][0] == 'C')
			f += 6;
		if(v[i][0] == 'I')
			f += 20;

		v.clear();
	}

	printf("%d\n", f);

	return 0;
}