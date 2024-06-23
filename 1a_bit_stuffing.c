#include<stdio.h>
int main(){
    int n,pos=0,c=0,j,k;
    printf("enter size\n");scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

for(int i=0;i<n;i++){
        if(a[i]==1){
            c++;
            if(c==5){
                c=0;
                pos=i+1;
                for(int j=n;j>=pos;j--){
                    k=j+1;
                    a[k]=a[j];
                    
                }
                n=n+1;
                a[pos]=0;
            }
        }
        else c=0;
    }


    printf("data after stuffing     "); 


for(int i=0;i<n;i++) 
{ 
printf("%d ",a[i]) ; 
} 

//inp 12   0 1 0 1 1 1 1 1 1 0 0 1
//op  0101111101001

}