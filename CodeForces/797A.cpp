#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    nfs;
    long long n,k,op=2,ks=0,t,a[21],i;
	cin>>n>>k;
	t=n;
	if(k==1){
		cout<<n;
		return 0;
	}
	while(n){
		if(n%op==0) {
		n=n/op;
		ks++;
		a[ks]=op;
		}
		else op++;
		if(ks==k-1&&n!=1&&t!=2) {
			for(i=1;i<=ks;i++){
				cout<<a[i]<<" ";
			}
			cout<<n;
			return 0;
		}
		if(op>n){
			cout<<-1;
			return 0;
		}
    }
    return 0;
}
