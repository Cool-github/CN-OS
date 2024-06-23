#include<stdio.h>
int main()
{
int n,m[20],i,j,sb[20],b[20][20],x;
printf("\nEnter no. of files:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter index block of file%d:",i+1);
scanf("%d",&sb[i]);
printf("\nEnter length of file%d:",i+1);
scanf("%d",&m[i]);
printf("enter blocks of file%d:",i+1);
for(j=0;j<m[i];j++)
scanf("%d",&b[i][j]);
}
printf("\nFile\t Index\tLength\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\t%d\n",i+1,sb[i],m[i]);
}
printf("\nEnter file name:");
scanf("%d",&x);
printf("\nfile name is:%d",x);
printf("\nIndex is:%d",sb[x-1]);
printf("\nBlocks occupied are:");
for(j=0;j<m[x-1];j++)
printf("%4d",b[x-1][j]);
}

/*

Enter no. of files:2

Enter index block of file1:2

Enter length of file1:5
enter blocks of file1:2 3 5 6 8

Enter index block of file2:13 

Enter length of file2:8 13 25 42 33 57 65 72 84
enter blocks of file2:
File     Index  Length
1       2       5
2       13      8

Enter file name:2

file name is:2
Index is:13
Blocks occupied are:  13  25  42  33  57  65  72  84
*/