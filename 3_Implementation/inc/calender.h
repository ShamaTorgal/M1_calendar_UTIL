#include <stdio.h>
#include <stdlib.h>
#include "calender_structure.h"


#ifndef CALENDER_H_
#define CALENDER_H_

int isLeapYear1( int year );        /* True if leap year */
int leapYrs( int year );         /* The number of leap year */
int todayOff( int y, int m, int d); /* The number of s since the beginning of the year */
long dayss( int y, int m, int d);   /* Total number of s */
void calendarr(int y, int m);       /* display r at m y */
int getDayNum(int d,int m,int y);
char *getName(int day);
void flush();

int year,month, day;
    char choice;
    Note note;
    FILE *fp;

#endif