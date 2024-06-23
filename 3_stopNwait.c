#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int i, j, x, x1 = 10, noOfFrames;
for(i=0;i<200;i++) 
rand();
    
    noOfFrames = rand() /200 ; // Generate a reasonable number of frames between 1 and 10

    i = 1;
    j = 1;
noOfFrames/=8;
    printf("Number of frames: %d\n", noOfFrames);

    while (noOfFrames > 0) {
        printf("Sending frame %d\n", i);
        srand(x1++);
        x = rand() % 10;

        if (x % 2 == 0) {
            for (int x2 = 1; x2 < 2; x2++) {
                printf("Waiting for %d second\n", x2);
                sleep(x2);
            }
            printf("Re-sending frame %d\n", i);
            srand(x1++);
            x = rand() % 10;
        }

        printf("ACK for frame %d\n", j);
        noOfFrames -= 1;
        i++;
        j++;
    }

    printf("End of stop and wait protocol\n");
    return 0;
}
