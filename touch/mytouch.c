#include <stdio.h>

int main(int argc , const char *argv []){
     
    if(argc ==1){
        printf("mytouch: missing file operand \nTry 'touch --help' for more information.");
        return 1;
    }
    for(int i = 1 ; i<argc ;i++){
        FILE *file = fopen(argv[i] ,"a");
    }
    return 0;
}