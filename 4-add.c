#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc,char ** argv){
    int result;
    if (argc < 1){
        return 0;
    }
    for(int i = 1;i < argc;i ++){
        for(int j = 0;argv[i][j] != '\0'; j ++){
            if(!isdigit(argv[i][j])){
                printf("Error\n");
                return 1;

            }
        }
        result += atoi(argv[i]);
    }
    printf("%d\n",result);
}