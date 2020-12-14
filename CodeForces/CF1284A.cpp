#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,q,y;
	scanf("%d %d", &n, &m);

	vector<string> s(n);
	vector<string> t(m);

	for(i=0; i<n; i++)
		cin >> s[i];
	for(i=0; i<m; i++)
		cin >> t[i];

	scanf("%d", &q);

	while(q--) {
		scanf("%d", &y);
		int p,x;

		p = y%n;
		x = y%m;
		if(p==0) p = n;
		if(x==0) x =m;

		cout << s[p-1]+t[x-1] << endl;
	}


	return 0;
}