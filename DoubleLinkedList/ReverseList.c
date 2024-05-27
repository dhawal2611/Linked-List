#include "SingleLinkList.h"

Student *SReverseList (Student *Head) {
    if (Head == NULL) {
        printf("No node availble in the list\n");
        return NULL;
    }

    Student *ReverseList = NULL, *Currnt = Head, *PrevList = NULL;

    while(Currnt != NULL) {
        ReverseList = Currnt->next;
        Currnt->next = PrevList;

        PrevList = Currnt;
        Currnt = ReverseList;
    }
    return PrevList;

}