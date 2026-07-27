
#include <stdio.h>
#include <string.h>
int main(){
    char firstname[20];
    char lastname[20];
    char fullname[40];
    firstname[0]='\0';
    strncat(fullname, firstname, 20);
    strncat(fullname, lastname, 20);
    return 0;
}
