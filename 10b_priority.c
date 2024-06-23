#include<stdio.h>
int main(){
    int tat[10],bt[10],pid[10],wt[10],pr[10],ttat=0,twt=0,n,t;
    float awt,atat;
printf("enter no of processes \n");
scanf("%d",&n);

printf("enter each bt \n");
for(int i=0;i<n;i++){
    scanf("%d",&bt[i]);

}
printf("enter each pid \n");
for(int i=0;i<n;i++){
    scanf("%d",&pid[i]);

}
printf("enter each priorit \n");
for(int i=0;i<n;i++){
    scanf("%d",&pr[i]);

}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(pr[i]>pr[j]){
            t=pr[i];
            pr[i]=pr[j];
            pr[j]=t;

            t=bt[i];
            bt[i]=bt[j];
            bt[j]=t;

            t=pid[i];
            pid[i]=pid[j];
            pid[j]=t;
        }
    }
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

    printf("\n PID PRIORITY \t BT \t WT \t TAT"); 
for(int i=0;i<n;i++) 
printf("\n %d\t%d\t%d\t%d\t%d",pid[i],pr[i],bt[i],wt[i],tat[i]); 

    awt=(float)twt/n; 
atat=(float)ttat/n;

printf("\nAvg. Waiting Time=%f",awt); 
printf("\nAvg. Turn around time=%f",atat);
}



/*
enter no of processes 
4
enter each bt
2 6 4 5
enter each pid
5 6 3 4
enter each priorit
3 2 6 1

 PID PRIORITY    BT      WT      TAT
 4      1       5       0       5
 6      2       6       5       11
 5      3       2       11      13
 3      6       4       13      17
Avg. Waiting Time=7.250000
Avg. Turn around time=11.500000
*/