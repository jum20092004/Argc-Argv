#include <stdio.h>
#include <stdlib.h>
int main(int argc,char ** argv){
    if(argc <= 1){ 
        printf("Error\n");
        return 1;
    }
    else if(argc <  0){
        printf("0\n");
    }
    int cents = atoi(argv[1]);
    int count = 0;
    cents += cents /25;
    count %= 25;

    cents += cents /10;
    count %= 10;

    cents += cents /5;
    count = 5;

    cents += cents /2;
    count %= 2;

    cents += cents /1;
    count %= 1;

    printf("%d\n",count);
    return 0;
}