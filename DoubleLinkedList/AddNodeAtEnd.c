#include "DoubleLinkList.h"

Student *SAddNodeAtEnd (Student *Head) {
    Student *TakeDataNode, *ItrNode;

    TakeDataNode = calloc(1, sizeof(struct SLL));

    printf("Enter Roll No.: ");
    scanf("%d", &TakeDataNode->RollNo);

    TakeDataNode->next = NULL;
    TakeDataNode->prev = NULL;

    if(Head == NULL) {
        printf("Added first Node\n");
        Head = TakeDataNode;
    } else {
        ItrNode = Head;
        while(ItrNode->next) {
            ItrNode = ItrNode->next;
        }
        ItrNode->next = TakeDataNode;
        TakeDataNode->prev = ItrNode;
    }

    return Head;
}