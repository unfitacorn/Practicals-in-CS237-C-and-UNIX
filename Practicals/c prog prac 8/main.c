/* 
 * File:   main.c
 * Author: rdm10
 *
 * Created on 23 November 2015, 12:39
 */

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

/*
 * 
 */
int main(int argc, char** argv) {
    DIR * current_directory_ptr;
    struct dirent *next_entry_ptr;
    char open[60];
    
    printf("Please enter a directory to open:");
    scanf(" %s", open);
    
    current_directory_ptr = opendir(open);
    
    next_entry_ptr = readdir(current_directory_ptr);
    
    while(next_entry_ptr != NULL){
        printf("File has inode number %d and is called %s\n", (int)next_entry_ptr ->d_ino, next_entry_ptr->d_name);
        
        next_entry_ptr = readdir(current_directory_ptr);
    }
    
    closedir(current_directory_ptr);
    return (EXIT_SUCCESS);
}

