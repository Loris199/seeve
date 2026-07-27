#define MAX_SIZE 16
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i, j=0;
    char a[MAX_SIZE];
    
    if (argc<2) return 0;
    
    if (MAX_SIZE <= strlen(argv[1])){
       printf("user string too long");
       return 0;
    }
 
    for (i=0; i < strlen(argv[1]); i++){
        if( '&' == argv[1][i] ){
            a[j++] = '&';
            a[j++] = 'a';
            a[j++] = 'm';
            a[j++] = 'p';
            a[j++] = ';';
        }
        else a[j++]=argv[1][i]; 
     }
     printf("The encoded string is %s \n",a);
     return 0;
}

