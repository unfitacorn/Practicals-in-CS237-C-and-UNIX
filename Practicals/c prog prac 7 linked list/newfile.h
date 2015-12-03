/* 
 * File:   newfile.h
 * Author: rdm10
 *
 * Created on 16 November 2015, 12:01
 */

#ifndef NEWFILE_H
#define	NEWFILE_H

#ifdef	__cplusplus
extern "C" {
#endif

    struct node {
        char title[50];
        char author[30];
        long ISBN;
        struct node *next;
    };
    
    
    
void create_book();    
void print();
int book_num;
struct node *header, *current;
void insert(struct node* current);


#ifdef	__cplusplus
}
#endif

#endif	/* NEWFILE_H */

