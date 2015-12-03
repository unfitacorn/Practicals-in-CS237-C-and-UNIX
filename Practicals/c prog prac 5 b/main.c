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

    
    int compNum;
    

    printf("How many competitors are there?");
    scanf("%d", &compNum);


    struct competitor* a[compNum];

    


    int i = 0;
    do {
        
        struct competitor* new_comp = malloc(sizeof(struct competitor));
        new_comp->compID = i;
        printf("Please enter a name:");
        scanf(" %s", new_comp->name);

        printf("Please enter swimming time in seconds:");
        scanf("%d", &(new_comp->swimSecs));

        printf("Please enter cycle time in seconds:");
        scanf("%d", &(new_comp->cyclSecs));

        printf("Please enter running time in seconds:");
        scanf("%d", &(new_comp->runSecs));
        //free (a.name);
        new_comp->totalSecs = new_comp->swimSecs + new_comp->cyclSecs + new_comp->runSecs;
      
        
        a[i] = new_comp;
        i++;
    } while (i < compNum);


    //sort(a);
    
    i=0;
    printf("\n\nNAME\tcompetitor\tswim time\tcycle time\trun time\ttotal time");
    printf("\n=====================================================================================================");
    do {
        printf("\n%s", a[i]->name);
        printf("\t%d\t",a[i]->compID);
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
    c = (time % HOURS) % MINS;
    printf("\t%dH %dM %dS", a, b, c);

}

//void sort(struct competitor** a){
//  
//}

