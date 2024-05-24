#ifndef __DOUBLELINKLIST__
#define __DOUBLELINKLIST__

#include <stdio.h>
#include <stdlib.h>

typedef struct SLL {
    int RollNo;
    struct SLL *next;
    struct SLL *prev;
}Student;

Student *SAddNodeAtEnd (Student *Head);
void vPrintDoubleLinkList(Student *Head);
void vPrintDoubleLinkListReverse(Student *Head);
Student *SAddNodeAtBegin (Student *Head);
Student *SAddNodeAtMiddle (Student *Head);
Student *SDeletFirstNode (Student *Head);
Student *SAddNodeAtInputLocation (Student *Head);
Student *vDeletLastNode(Student *Head);
Student *SDeletNodeByInputLocation(Student *Head);
void vSearchAnElementInList(Student *Head);
Student *SSortList(Student *Head);

#endif
