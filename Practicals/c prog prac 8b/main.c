/* 
 * File:   main.c
 * Author: Robert
 *
 * Created on 27 November 2015, 18:02
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/*
 * 
 */
int main(int argc, char** argv) {

    char my_buffer[1000];
    ssize_t status;
    int i;
    char open_file[60];
    
    printf("Please enter a file to open:");
    scanf(" %s", open_file);
    
    status = read(open(open_file,O_RDONLY),my_buffer, );
    printf("We read in %d bytes\n",status);
    for (i=0;i<status;i++)
    {
        printf("The code of byte %d is %d\n", i, my_buffer[i]);
    }
    
    
    return (EXIT_SUCCESS);
}

