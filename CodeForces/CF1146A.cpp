#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int count = 0,sz;

	cin >> s;
	sz = s.size();

	for (int i = 0; i < sz; i++)
	{
		if (s[i] == 'a')
		{
			count++;
		}
	}

	
	int ans = min(sz, 2*count-1);
	printf("%d\n", ans);

	return 0;
}