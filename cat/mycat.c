#include <stdio.h>

int main(int argc , const char *argv []){

    for(int i = 1; i < argc ; i++){
        FILE *file = fopen(argv[i] , "r");
        if(file == NULL){
            printf("mycat: %s: No such file or directory" , argv[i]);
            continue;
        }
        int ch;
        while((ch = fgetc(file))!=EOF){
            printf("%c", ch);
        }
        fclose(file);
    }
    return 0;
}