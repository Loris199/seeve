#include <stdio.h>
#include <stdlib.h>
void func ( int* ptr , int a, int b) {
     int val = 0;
     if (! ptr) return;
     if(a) {
         *ptr+= 2;
     } else {
         val=*ptr ;
         free(ptr) ;
     }
     if(b) {
         val += 5;
     } else {
         val += *ptr ;
     }
     if(a) free(ptr) ;
     printf ("val = %i\n", val) ;
     }

int main () {
     func(malloc(sizeof ( int)),0,0) ;
     return 0;
}
