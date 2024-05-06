#ifndef __SINGLELINKLIST__
#define __SINGLELINKLIST__

#include <stdio.h>
#include <stdlib.h>

typedef struct SLL {
    int RollNo;
    struct SLL *next;
}Student;

Student *SAddNodeAtEnd (Student *Head);
void vPrintSingleLinkList(Student *Head);
Student *SAddNodeAtBegin (Student *Head);
Student *SAddNodeAtMiddle (Student *Head);
Student *SDeletFirstNode (Student *Head);
Student *SAddNodeAtInputLocation (Student *Head);
Student *vDeletLastNode(Student *Head);

#endif
