#include<cstdio>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    int a[n+2];

    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    // int mid = n/2;

    // for(int i=0, j=n-1; i<mid; i++,j--) {
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    // }

    for(int i=n-1; i>=0; i--)
        printf("%d ", a[i]);

    return 0;
}