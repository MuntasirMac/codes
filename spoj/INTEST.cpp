#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	int n,k,cnt=0;
	scanf("%d %d", &n, &k);

	while(n--) {
		int x;
		scanf("%d", &x);
		if (x%k==0)
		{
			/* code */
			cnt++;
		}
	}

	printf("%d\n",cnt);
	return 0;
}