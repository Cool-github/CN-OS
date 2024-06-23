#include<stdio.h>
int main(){
    int tat[10],bt[10],pid,wt[10],ttat=0,twt=0,n;
    float awt,atat;
printf("enter no of processes \n");
scanf("%d",&n);

printf("enter each bt \n");
for(int i=0;i<n;i++){
    scanf("%d",&bt[i]);

}

    wt[0]=0;
    tat[0]=bt[0];

    for(int i=1;i<=n;i++){
        wt[i]=tat[i-1];
        tat[i]=bt[i]+wt[i];
    }

    for(int i=0;i<n;i++){
        ttat+=tat[i];
        twt+=wt[i];

    }

    printf("\n PID \t BT \t WT \t TAT"); 
for(int i=0;i<n;i++) 
printf("\n %d\t%d\t%d\t%d",i+1,bt[i],wt[i],tat[i]); 
    

    awt=(float)twt/n; 
atat=(float)ttat/n;

printf("\nAvg. Waiting Time=%f",awt); 
printf("\nAvg. Turn around time=%f",atat);
}

/*
enter no of processes
3
enter each bt
4 13 25

 PID     BT      WT      TAT       
 1      4       0       4
 2      13      4       17
 3      25      17      42
Avg. Waiting Time=7.000000
Avg. Turn around time=21.000000  
*/