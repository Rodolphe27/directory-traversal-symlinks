#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

int main (void){
    DIR *dir=opendir(".");
    if(dir==NULL){
        perror("opendir");
        return EXIT_FAILURE;
    }

    struct dirent *entry;
    errno=0;
    while((entry=readdir(dir))!=NULL){
        struct stat file_data;
        int error_code =lstat(entry->d_name,&file_data);
        if(error_code==-1){
            perror("lstat");
            exit(EXIT_FAILURE);
       }
       if(S_ISLNK(file_data.st_node)){
        printf("%s\n",entrty->d_name);
       }
       errno=0;

    }
    if(errno!=0){
        perror("readdir");
        exit(EXIT_FAILURE);
    }else{
        exit(EXIT_SUCCESS);
    }
}