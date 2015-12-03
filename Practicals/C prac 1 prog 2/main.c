/* 
 * File:   main.c
 * Author: rdm10
 *
 * Created on 05 October 2015, 12:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

float inches2metres(float feet, float inches);

int main(int argc, char** argv) {
    float a,b,c; /*define three integer variables*/


    printf("Please enter feet:");
    scanf("%f",&a);
    printf("Please enter inches:");
    scanf("%f",&b);
    c = inches2metres(a,b);
            /*Print out some answers*/
    printf(" %f feet %f inches in metres is %f metres\n", a, b, c);
    return (EXIT_SUCCESS);
}

float inches2metres(float feet, float inches){

    float c;
    /* */
    c = (feet*12) + inches;

    c=(c*2.54)/100; 

    return c;
}


