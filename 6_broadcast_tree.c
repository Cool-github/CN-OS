#include<stdio.h> 
int a[10][10],n; 

int adj(int k){
    int i,j; 
printf("Adjacent node of root node::\n"); 
printf("%d\n\n",k); 
for(j=1;j<=n;j++) 
{ 
if(a[k][j]==1 || a[j][k]==1) 
printf("%d\t",j); 
} 
printf("\n"); 
for(i=1;i<=n;i++){ 
if((a[k][j]==0) && (a[i][k]==0) && (i!=k)) 
printf("%d",i); 
} 
}

int main(){ 
int i,j,root; 
printf("Enter no.of nodes:"); 
scanf("%d",&n); 
printf("Enter adjacent matrix\n"); 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++){ 
printf("Enter connecting of %d-->%d::",i,j); 
scanf("%d",&a[i][j]); 
} 
printf("Enter root node:"); 
scanf("%d",&root); 
adj(root); 
} 

/*
Enter no.of nodes:3
Enter adjacent matrix
Enter connecting of 1-->1::0
Enter connecting of 1-->2::1
Enter connecting of 1-->3::1
Enter connecting of 2-->1::1
Enter connecting of 2-->2::1
Enter connecting of 2-->3::1
Enter connecting of 3-->1::1
Enter connecting of 3-->2::1
Enter connecting of 3-->3::0
Enter root node:3
Adjacent node of root node::
3

1       2

*/