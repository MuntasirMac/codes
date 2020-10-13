//Matched Brackets 
//Problem Code: ZCO12001

#include<cstdio>
using namespace std;

int main()
{
    int n,temp,current=0,length=0,max_length=0,start=1,max_current=0,max_length_position=0,max_position,i;
    
    scanf("%d", &n);
    
    int a[n+2];
    
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    for(i=0; i<n; i++) {
        temp = a[i];
        
        if(temp == 1) {
            current++;
            length++;
            
            if(current > max_current) {
                max_current = current;
                max_position = i+1;
            }
        }
        
        else {
            current--;
            length++;
            
            if(current == 0) {
                if(length > max_length) {
                    max_length = length;
                    max_length_position = start;
                }
                
                length = 0;
                start = i+2;
            }
        }
    }
    
    printf("%d %d %d %d\n",max_current,max_position,max_length,max_length_position);
    
    return 0;
}
