/* 
 * File:   main.c
 * Author: rdm10
 *
 * Created on 05 October 2015, 12:51
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/*
 * 
 */


int main(int argc, char** argv) {
    float a,b,c,loopNum; /*define three integer variables*/
    int i;

    printf("How many times would you like to loop?:");
 
    scanf("%f",&loopNum);
    
    for (i = 0; i<loopNum ; i++){
 
        printf("Please enter feet:");
        scanf("%f",&a);
        printf("Please enter inches:");
        scanf("%f",&b);
        c = inches2metres(a,b);
                /*Print out some answers*/
        printf(" %f feet %f inches in metres is %f metres\n", a, b, c);
    }

 printf("Goodbye");

    return (EXIT_SUCCESS);
}

float inches2metres(float feet, float inches){

    float c;
    /* */
    c = (feet*12) + inches;

    c=(c*2.54)/100; 

    return c;
}


