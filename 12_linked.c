#include <stdio.h>

struct file {
    char fname[10];
    int start, size, block[10];
} f[10];

int main() {
    int i, j, n;
    printf("Enter no. of files: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter file name: ");
        scanf("%s", f[i].fname);  // Remove & for char array
        printf("Enter starting block: ");
        scanf("%d", &f[i].start);
        f[i].block[0] = f[i].start;
        printf("Enter no. of blocks: ");
        scanf("%d", &f[i].size);
        printf("Enter block numbers: ");
        for (j = 1; j < f[i].size; j++) {
            scanf("%d", &f[i].block[j]);
        }
    }

    printf("File\tstart\tsize\tblock\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t", f[i].fname, f[i].start, f[i].size);
        for (j = 0; j < f[i].size; j++) {  // Correct loop to print all blocks
            if (j != 0) {
                printf("--->");
            }
            printf("%d", f[i].block[j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Enter no. of files: 2
Enter file name: k
Enter starting block: 2
Enter no. of blocks: 6
Enter block numbers: 7
11
14
19
22
Enter file name: ku
Enter starting block: 33
Enter no. of blocks: 4
Enter block numbers: 47
54
67
File    start   size    block
k       2       6       2--->7--->11--->14--->19--->22
ku      33      4       33--->47--->54--->67
*/
