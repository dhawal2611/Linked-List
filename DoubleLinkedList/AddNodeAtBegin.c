
#include "DoubleLinkList.h"

Student *SAddNodeAtBegin (Student *Head) {
    Student *TakeDataNode;

    TakeDataNode = calloc(1, sizeof(struct SLL));

    printf("Enter Roll No.: ");
    scanf("%d", &TakeDataNode->RollNo);

    TakeDataNode->next = NULL;
    TakeDataNode->prev = NULL;

    if(Head == NULL) {
        printf("Adding first Node\n");
        Head = TakeDataNode;
    } else {
        TakeDataNode->next = Head;
        Head->prev = TakeDataNode;
        Head = TakeDataNode;
    }

    return Head;
   
}
