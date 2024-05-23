#include "SingleLinkList.h"

Student *SSortList (Student *Head) {
    if (Head == NULL) {
        printf("No node availble in the list\n");
        return NULL;
    }

    Student *SSorted = NULL;

    Student* SCurrent = Head;
    while (SCurrent != NULL) {
        Student* SNext = SCurrent->next;

        if (SSorted == NULL || SSorted->RollNo > SCurrent->RollNo) {
            SCurrent->next = SSorted;
            SSorted = SCurrent;
        } else {
            Student* SItrNode = SSorted;
            while (SItrNode->next != NULL && SItrNode->next->RollNo < SCurrent->RollNo) {
                SItrNode = SItrNode->next;
            }
            SCurrent->next = SItrNode->next;
            SItrNode->next = SCurrent;
        }

        SCurrent = SNext;
    }
    Head = SSorted;
    return Head;

}