#include <stdio.h>
#include <dirent.h>

int main(int argc , const char *argv[]){
    struct dirent *de;
    // The opendir function opens and returns a directory stream for reading the directory whose file name is dirname
    const char *dir;
    if (argc == 1){
         dir =  ".";
    }
    else {
        dir = argv[1];
    }
    DIR *dirname = opendir(dir);
    if(dirname == NULL){
        printf("ls: cannot access '%s': No such file or directory" , dir);
        return 1;
    }
    while ((de = readdir(dirname)) != NULL)
    {
        printf("%s  ", de->d_name);
    }
    return 0;
}