#include <stdio.h>

int main() {
    int b[10], sb[10], c[10][10], t[10], n, x;

    printf("Enter number of files: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Number of blocks in file %d: ", i + 1);
        scanf("%d", &b[i]);
        printf("Start block of file %d: ", i + 1);
        scanf("%d", &sb[i]);

        t[i] = sb[i];

        for (int j = 0; j < b[i]; j++) {
            c[i][j] = sb[i]++;
        }
    }

    printf("Filename\tStart block\tLength\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\n", i + 1, t[i], b[i]);
    }

    printf("Enter file number to view details: ");
    scanf("%d", &x);

    if (x < 1 || x > n) {
        printf("Invalid file number.\n");
    } else {
        printf("Name of file: %d\n", x);
        printf("Length of file: %d\n", b[x - 1]);
        printf("Blocks occupied:\n");
        for (int i = 0; i < b[x - 1]; i++) {
            printf("%4d", c[x - 1][i]);
        }
        printf("\n");
    }

    return 0;
}


/* 
Enter number of files: 2
Number of blocks in file 1: 4      
Start block of file 1: 2
Number of blocks in file 2: 10     
Start block of file 2: 5
Filename        Start block     Length
1               2               4  
2               5               10 
Enter file number to view details: 2
Name of file: 2
Length of file: 10
Blocks occupied:
   5   6   7   8   9  10  11  12  13  14
*/