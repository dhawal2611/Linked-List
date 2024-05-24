
#include "SingleLinkList.h"

Student *SDeletFirstNode (Student *Head) {
    Student *DeletFirstNode = NULL;

    if(Head == NULL) {
        printf("No node avaiable to delet\n");
        return NULL;
    } else {
        DeletFirstNode = Head;
        if(Head->next != NULL) {
            Head = Head->next;
        } else {
            Head = NULL;
        }
        DeletFirstNode->RollNo = 0;
        DeletFirstNode->next = NULL;
        free(DeletFirstNode);
        DeletFirstNode = NULL;
    }

    return Head;
   
}
