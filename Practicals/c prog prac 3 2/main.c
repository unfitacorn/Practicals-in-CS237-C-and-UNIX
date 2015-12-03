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
    float a,b,c; /*define three integer variables*/
    

  
    do{
        printf("Please enter feet:");
        scanf("%f",&a);
        printf("Please enter inches:");
        scanf("%f",&b);
        c = inches2metres(a,b);
                /*Print out some answers*/
        printf(" %f feet %f inches in metres is %f metres\n", a, b, c);
    } while (a>0 && b>0);

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


