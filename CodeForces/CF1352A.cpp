#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,t;
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);

		int p=1;
		vector<int> v;


		while(n) {
			int x = n%10;
			int y = x * p;
			if (y)
			{
				v.push_back(y);
			}
			n /= 10;
			p = p*10;
		}

		printf("%d\n", v.size());

		for (int i = 0; i < v.size(); i++)
		{
			printf("%d ", v[i]);
		}

		printf("\n");
	}

	return 0;
}