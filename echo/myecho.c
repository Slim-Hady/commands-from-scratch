#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc , const char * argv[]){
    bool flag = true;
    if (argc > 1 && strcmp(argv[1], "-n") == 0) {
        flag = false;
    }
    for(int i = 1; i < argc ; i++){
        if (i == 1 && flag == false) { 
            continue;
        }
        if(i == argc - 1){
            printf("%s", argv[i]);
            break;
        }
        printf("%s ", argv[i]);
    }
    if(flag) printf("\n");
}