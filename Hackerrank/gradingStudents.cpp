#include<stdio.h>

int main(int argc, char const *argv[])
{
	int t,n;
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);

		if(n >= 38) {
			int a = n%5;
			if (a >= 3)
			{
				n += (5-a);
			}
		}

		printf("%d\n", n);
	}
	return 0;
}