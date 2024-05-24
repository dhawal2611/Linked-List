
#include "SingleLinkList.h"

Student *vDeletLastNode (Student *Head) {
    Student *DeletLastNode = NULL, *SCurrentNode = Head;

    if(Head == NULL) {
        printf("No node avaiable to delet\n");
        return NULL;
    } else {
        if(Head->next == NULL) {
            SCurrentNode = NULL;
        }
        while(Head->next) {
            DeletLastNode = Head;
            Head = Head->next;
        }
        if(Head->next) {
            DeletLastNode->next = NULL;
        }
        printf("Delete node\n");
        Head->RollNo = 0;
        Head->next = NULL;
        free(Head);
        Head = NULL;
    }

    return SCurrentNode;
}