#include <bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	vector<string> v(5);
	bool f = 0;

	cin >> input;

	for(int i=0; i<5; i++)
		cin >> v[i];

	for(int i=0; i<5; i++) {
		if(v[i][0] == input[0] || v[i][1] == input[1]) {
			printf("YES\n");
			f = 1;
			break;
		}
	}

	if(!f)
		printf("NO\n");

	return 0;
}