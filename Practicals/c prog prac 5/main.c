/* 
 * File:   main.c
 * Author: rdm10
 *
 * Created on 02 November 2015, 12:04
 */

#include <stdio.h>
#include <stdlib.h>
#define HOURS 3600
#define MINS 60
/*
 * 
 */

void timeConv(int time);
int main(int argc, char** argv) {

struct competitor {
        char name[30];
        int swimSecs;
        int cyclSecs;
        int runSecs;
        int totalSecs;
    };
    struct competitor a;
    //a.name = malloc(sizeof(char)*30);
    
    printf("Please enter a name:");
    scanf(" %s", a.name);
    
    printf("Please enter swimming time in seconds:");
    scanf("%d", &(a.swimSecs));
    
    printf("Please enter cycle time in seconds:");
    scanf("%d", &(a.cyclSecs));
    
    printf("Please enter running time in seconds:");
    scanf("%d", &(a.runSecs));
    //free (a.name);
    a.totalSecs = a.swimSecs + a.cyclSecs + a.runSecs;
    
   
    printf("Competitor's name: %s\n", a.name);
    
    printf("Time for Swim: ");
    timeConv(a.swimSecs);
    printf("\nTime for Cycle race: ");
    timeConv(a.cyclSecs);
    printf("\nTime for running race: ");
    timeConv(a.runSecs);
    printf("\nCompetitor %s has a total time of: ", a.name);
    timeConv(a.totalSecs);

    return (EXIT_SUCCESS);
   
}

void timeConv(int time){
    int a,b,c;
    a = time / HOURS;
    b = (time % HOURS) / MINS;
    c =(time % HOURS) % MINS;
    printf("%dH %dM %dS",a,b,c);
            
    
    
}
