/* 
 * File:   main.c
 * Author: rdm10
 *
 * Created on 02 November 2015, 12:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "newfile.h";
/*
 * 
 */




int main(int argc, char** argv) {

    

    

    printf("How many competitors are there?");
    scanf("%d", &compNum);


    struct competitor* a[compNum];

    


    int i = 0;
    
    do {
        
        struct competitor* new_comp = malloc(sizeof(struct competitor));
        new_comp->compID = i;
        printf("Please enter a name:");
        scanf(" %s", new_comp->name);

        printf("Please enter swimming time (hrs mins secs):");
        
        new_comp->swimSecs = scanTime();
        
        printf("Please enter cycle time (hrs mins secs):");
     
        new_comp->cyclSecs = scanTime();

        printf("Please enter run time (hrs mins secs):");
        
        new_comp->runSecs =  scanTime();
        
        new_comp->totalSecs = new_comp->swimSecs + new_comp->cyclSecs + new_comp->runSecs;
      
        
        a[i] = new_comp;
        i++;
    } while (i < compNum);


    sort(a);
    
    i=0;
    printf("\n\nNAME      competitor      swim time         cycle time          run time          total time");
    printf("\n=====================================================================================================");
    do {
        printf("\n%-10s", a[i]->name);
        printf("%5d",a[i]->compID);
        timeConv(a[i]->swimSecs);
        timeConv(a[i]->cyclSecs);
        timeConv(a[i]->runSecs);
        timeConv(a[i]->totalSecs);
        i++;
    } while (i < compNum);


   
    return (EXIT_SUCCESS);

}

void timeConv(int time) {
    int a, b, c;
    a = time / HOURS;
    b = (time % HOURS) / MINS;
    
    if (b<10){
        b = '0' + b;
    }
    
    c = (time % HOURS) % MINS;
    printf("%12dH %dM %dS", a, b, c);

}

void sort(struct competitor** a) {

    int n = compNum;


    struct competitor temp;
    int i, j;

    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++) {



            if (a[j]->totalSecs > a[j + 1]->totalSecs) {


                temp = *a[j];

                *a[j] = *a[j + 1];

                *a[j + 1] = temp;

            }
        }


    return;
}


int scanTime() {
    
    int hrs, mins, secs, result;
    
    
    scanf("%d %d %d",&hrs,&mins,&secs);
    result = (hrs*3600) + (mins*60) + (secs);
    
    
    return result;
}
