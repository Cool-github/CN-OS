#include<stdio.h>

int main() {
    int ts, bt1[10], wt[10], tat[10], i, j = 0, n, bt[10], ttat = 0, twt = 0, tot = 0;
    float awt, atat;

    printf("Enter the number of processes: \n");
    scanf("%d", &n);

    printf("\nEnter the timeslice: \n");
    scanf("%d", &ts);

    printf("\nEnter the burst time for each process:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &bt1[i]);
        bt[i] = bt1[i];
    }

    while (j < n) {
        for (i = 0; i < n; i++) {
            if (bt[i] > 0) {
                if (bt[i] >= ts) {
                    tot += ts;
                    bt[i] -= ts;
                    if (bt[i] == 0) {
                        j++;
                        tat[i] = tot;
                    }
                } else {
                    tot += bt[i];
                    bt[i] = 0;
                    j++;
                    tat[i] = tot;
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        wt[i] = tat[i] - bt1[i];
        twt += wt[i];
        ttat += tat[i];
    }

    awt = (float)twt / n;
    atat = (float)ttat / n;

    printf("\nPID \t BT \t WT \t TAT\n");
    for (i = 0; i < n; i++) {
        printf("\n%d \t %d \t %d \t %d\n", i + 1, bt1[i], wt[i], tat[i]);
    }

    printf("\nThe average waiting time = %f", awt);
    printf("\nThe average turnaround time = %f", atat);

    return 0;
}


/*
Enter the number of processes: 
4

Enter the timeslice:
5

Enter the burst time for each process:
10 15 20 25

PID      BT      WT      TAT       

1        10      15      25        

2        15      30      45        

3        20      40      60        

4        25      45      70        

The average waiting time = 32.500000
The average turnaround time = 50.000000
*/