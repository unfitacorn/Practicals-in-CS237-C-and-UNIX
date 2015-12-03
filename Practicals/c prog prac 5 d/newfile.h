/* 
 * File:   newfile.h
 * Author: rdm10
 *
 * Created on 03 November 2015, 13:34
 */

#ifndef NEWFILE_H
#define	NEWFILE_H




struct competitor {
        int compID;
        char name[30];
        int swimSecs;
        int cyclSecs;
        int runSecs;
        int totalSecs;
    };
int compNum;
    
#define HOURS 3600
#define MINS 60
int scanTime();
void timeConv(int time);
    
#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* NEWFILE_H */

