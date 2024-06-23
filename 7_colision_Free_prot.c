#include<stdio.h>
int main(){
    int n;
    printf("no of stations\n");
    scanf("%d",&n);
int a[n];
char op;

do{
    for(int i=0;i<n;i++){
        printf("enter status of station %d\n",i+1);
        scanf("%d",&a[i]);
        
    }

     for(int i=0;i<n;i++){
        
        if(a[i]==1)printf("statiion %d is ready to transmit\n",i+1);

        
    }
    printf("\nRepeat? Press Y: \n");
        scanf(" %c", &op);
}while(op=='y'||op=='Y');
    
}

/*
no of stations
8
enter status of station 1
0
enter status of station 2
1
enter status of station 3
0
enter status of station 4
1
enter status of station 5
1
enter status of station 6
1
enter status of station 7
0
enter status of station 8
0
statiion 2 is ready to transmit
statiion 4 is ready to transmit
statiion 5 is ready to transmit
statiion 6 is ready to transmit

Repeat? Press Y:
n

*/