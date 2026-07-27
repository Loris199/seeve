#include <stdio.h>

int f(){
    int x=-1;
    return x;
}

int main (int argc, char **argv) {
    char *items[] = {"boat", "car", "truck", "train"};
    int index = f();
    printf("You selected %s\n", items[index-1]);
}
