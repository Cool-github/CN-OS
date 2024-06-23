#include<stdio.h>
#define max 20
#define infinity 9999

int min(int a,int b){
    if(a<=b)return a;
    else return b;

}

int main(){
    int i,j,k,n,adj[max][max],path[max][max],start,end;
    printf("enter no of vertices\n");

    scanf("%d",&n);

printf("enter matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&adj[i][j]);
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (adj[i][j]==0){
                path[i][j]=infinity;
            }
            else path[i][j]=adj[i][j];
        }
    }

for (k=0;k<n;k++){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(i==j)path[i][j]=infinity;
           else path[i][j]=min(path[i][j],path[i][k]+path[k][j] );
        }
    }
}

printf("Shortest path matrix is :\n"); 
 for(i=0;i<n;i++) 
 { 
  for(j=0;j<n;j++) 
   printf("%6d",path[i][j]); 
  printf("\n"); 
 } 


printf("Enter start vertex :\n"); 
 scanf("%d",&start); 
 printf("Enter end vertex :\n"); 
 scanf("%d",&end);

 printf("the min. cost between %d and %d is %d\n",start,end,path[start][end]);

}


/*
enter no of vertices
3
enter matrix
1 2 4   
3 7 2
1 0 4
Shortest path matrix is :
  9999     2     4
     3  9999     2
     1     3  9999
Enter start vertex :
1 
Enter end vertex :
2
the min. cost between 1 and 2 is 2

*/