#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv){
    if(argc <= 1){
        printf("Error\n");
        return 1;
    }
    else{
        int num = atoi(argv[1]);
        int num1 = atoi(argv[2]);
        int result = num * num1;
        printf ("%d\n",result);
    }

    
}