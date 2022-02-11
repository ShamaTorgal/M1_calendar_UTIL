
#ifndef calender_structure_H
#define calender_structure_H


/* strcture definition must be reused by the users in their code */

typedef struct {
  int day;
  int month;
  int year;
  char note[255];
} Note;


#endif