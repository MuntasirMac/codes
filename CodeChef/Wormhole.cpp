//Problem Code: ZCO12002
//Wormholes

#include<cstdio>
#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int beg_bin(int a[], int lo, int hi, int x)
{
    int p = -1, mid;
    
    while(lo <= hi) {
        mid = (lo+hi)/2;
        
        if((a[mid] <= x)) {
            
            p =  a[mid];
            
            lo = mid+1;
        }
        
        else 
            hi = mid-1;
    }
    
    return p;
}

int end_bin(int a[], int lo, int hi, int x)
{
    int p = -1, mid;
    
    while(lo <= hi) {
        mid = (lo+hi)/2;
        
        if((a[mid] >= x)) {
            
            p = a[mid];
            
            hi = mid - 1;
        }
        
        else
            lo = mid+1;
    }
    
    return p;
}

int main()
{
    int i,n,x,y, mini = 1000005;
    
    scanf("%d %d %d",&n,&x,&y);
    
    int s[n+1], e[n+1], v[x+1], w[y+1];
    
    for(i=0; i<n; i++)
        scanf("%d %d",&s[i],&e[i]);
    
    for(i=0; i<x; i++)
        scanf("%d",&v[i]);
    
    for(i=0; i<y; i++)
        scanf("%d",&w[i]);
    
    sort(v, v+x);
    
    sort(w, w+y);
    
    for(i=0; i<n; i++) {
        
        int l = end_bin(w,0,y-1,e[i]);
        int f = beg_bin(v,0,x-1,s[i]);
        
        /*if(end_bin(w,y,e[i]) > beg_bin(v,x,s[i]))
            d = end_bin(w,y,e[i]) - beg_bin(v,x,s[i]);*/
        
        if(!(l == -1 || f== -1))
            mini = min(mini,l-f+1);
        
        //printf("%d %d %d\n",end_bin(w,y,e[i]),beg_bin(v,x,s[i]),d);
    }
    
    printf("%d\n", mini);
    
    return 0;
}

/* Sample Input
 
3 4 2
15 21
5 10
7 25
4 14 25 2
13 21
 
*/
