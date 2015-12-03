/* 
 * File:   main.c
 * Author: rdm10
 *
 * Created on 19 October 2015, 13:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
int main(int argc, char** argv) {
        char a[30], b[30], c[60];
        int d,e,f; //length of string

        printf("Please enter a string up to 30 characters:");
        scanf(" %[0-9, ,A-z]s",a);
        printf("The string entered was : %s \n",a);
        d = strlen(a);
        printf("%d\n",d);

        printf("Please enter another string up to 30 characters:");
        scanf(" %[0-9, ,A-z]s",b);
        printf("The string entered was : %s \n",b);
        e = strlen(b);
        printf("%d\n",e);

        strcpy(c,a);
        strcat(c,b);
   

        printf("the string combined is : %s \n",c);
        f = strlen(c);
        printf("%d", f);

        


    return (EXIT_SUCCESS);
}

