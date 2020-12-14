#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,x;
	scanf("%d",&n);
 
	if(n%2 == 0) {
		
		x = n/2;

		printf("%d\n", x);
		for (int i = 0; i < x; i++)
		{
			printf("2 ");
		}
		printf("\n");
	}

	else {
		x = (n-3)/2;

		printf("%d\n", x+1);

		for (int i = 0; i < x; ++i)
		{
			printf("2 ");
		}

		printf("3\n");
	}

	return 0;
}