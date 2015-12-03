/* 
 * File:   main.c
 * Author: rdm10
 *
 * Created on 16 November 2015, 12:00
 */

#include <stdio.h>
#include <stdlib.h>

#include "newfile.h"

int main(int argc, char** argv) {
    header = NULL;

    printf("How many books are there?");
    scanf("%d", &book_num);

    int i = 0;


    do {
        create_book();
        i++;
    } while (i < book_num);
    print();

    find();

    return (EXIT_SUCCESS);
}

void create_book() {

    current = (struct node *) malloc(sizeof (struct node));

    printf("Please enter a title:");
    scanf(" %s", current->title);

    printf("Please enter an author:");
    scanf(" %s", current->author);

    printf("Please enter an ISBN:");
    scanf("%d", &current->ISBN);

    insert(current);
    //    current->next = header;

}

void print() {
    current = header;
    while (current != NULL) {
        printf(" %s, %s, %d\n", current->title, current->author, current->ISBN);
        current = current->next;
    }
}

void insert(struct node* c) {
    int set = 0;

    if (header == NULL) {
        header = c;
        set = 1;
        
    }else if(header->ISBN > c->ISBN){
        c->next = header;
        header = c;
        set = 1;
    } else {
        current = header;
        while(!set){
         if (current->next == NULL) {
            current->next = c;
            set =1;
        } else if (current->next->ISBN > c->ISBN) {
            c->next = current->next;
            current->next = c;
            set=1;

        }
         current = current->next;
        }

    }
}

void find() {
    int set = 0;
    int find_book;
    printf("Please enter the ISBN of the book you would like to find:");
    scanf("%d", &find_book);


    current = header;
    while (!set) {

        if (current->ISBN == find_book) {
            printf("Book: %s, %s, %d", current->title, current->author, current->ISBN);
            set =1;

        } else if(current->next == NULL){
            set =2;
        }
        current = current->next;
    }
    if (set==2){
        printf("Book with ISBN: %d not found", find_book);
    }

}