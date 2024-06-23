#include<stdio.h>
#include<string.h>
int main(){
    char input[100],key[100],key1[100],rem[100],temp[100],quot[100];
 printf("Enter Data: ");
scanf("%s",input);
printf("Enter Key: ");
scanf("%s",key);
    int msglen=strlen(input);
    int keylen=strlen(key);
strcpy(key1,key);

//adding 0 to input
    for(int i=0;i<keylen-1;i++){
        input[msglen+i]='0';
    }

   //copy first part of input 
   for(int j=0;j<keylen;j++){
    temp[j]=input[j];
   } 

   //perform division

   for(int i=0;i<msglen;i++){
    quot[i]=temp[0];

    //if 0 set all to 0
    if(quot[i]=='0'){
        for(int j=0;j<keylen;j++){
            key[j]='0';
        }
    }
    // if not zero take the og key
    else{
         for(int j=0;j<keylen;j++){
            key[j]=key1[j];
        }
    }

for(int j=keylen-1;j>0;j--){
    if(temp[j]==key[j]){
        rem[j-1]='0';
    }
    else rem[j-1]='1';
}

//shifting next ele in input
rem[keylen-1]=input[i+keylen];
strcpy(temp,rem);

   }
   strcpy(rem,temp);


printf("\nquotient\n");
for(int i=0;i<msglen;i++){
    printf("%c",quot[i]);
}


    printf("\nRemainder is ");
    for (int i = 0; i < keylen - 1; i++) {
        printf("%c", rem[i]);
    }

 printf("\nFinal data is: ");
    for (int i = 0; i < msglen; i++) {
        printf("%c", input[i]);
    }
    for (int i = 0; i < keylen - 1; i++) {
        printf("%c", rem[i]);
    }
printf("\n");

/*  
input 
Enter Data: 11010011101100
Enter Key: 1011
*/


/*
output

Quotient is 11000001101100
Remainder is 100
Final data is: 11010011101100100

*/

}