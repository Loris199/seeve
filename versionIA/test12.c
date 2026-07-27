#include <stdio.h>

void parse_data(char *untrusted_input){
    int m,n,error;
    error=sscanf(untrusted_input,"%d:%d",&m,&n);
    if (EOF == error){
        printf("Did not specify integer value. Die evil hacker!\n");
    }
    printf("m is %d and n is %d",m,n);
}

int main(){
    parse_data("123:");
    return 0;
}

