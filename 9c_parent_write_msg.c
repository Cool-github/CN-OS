#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main(){
    int pipe1[2],pipe2[2],pid;
    int retrn_stats1,retrn_stats2;

    char p1write[20]="hi";
    char p2write[20]="hello";

    char readmsg[20];

    retrn_stats1=pipe(pipe1);
    if(retrn_stats1==-1){
        printf("unable to creeate pipe\n");
        return 1;

    }

    retrn_stats2=pipe(pipe2);
    if(retrn_stats2==-1){
        printf("unable to creeate pipe\n");
        return 1;
    }

    pid=fork();
    if(pid!=0){
        close(pipe1[0]);
        close(pipe2[1]);

        printf("prnt : write to pipe1- msg is %s \n",p1write);
        write(pipe1[1],p1write,sizeof(p1write));
        read(pipe2[0],readmsg,sizeof(readmsg));
        printf("prnt : reading frm pipe2 - msg id %s \n",readmsg);

    }
    else{
         close(pipe1[1]);
        close(pipe2[0]);

 read(pipe1[0],readmsg,sizeof(readmsg));
        printf("child : reading  to pipe1- msg is %s \n",readmsg);
        printf("child writing to pipe 2 msg is %s ",p2write);


    }

    return 0;
}