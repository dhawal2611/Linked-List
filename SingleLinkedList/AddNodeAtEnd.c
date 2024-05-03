#include "SingleLinkList.h"

Student *SAddNodeAtEnd (Student *Head) {
    Student *TakeDataNode, *ItrNode;

    TakeDataNode = calloc(1, sizeof(struct SLL));

    printf("Enter Roll No.: ");
    scanf("%d", &TakeDataNode->RollNo);

    TakeDataNode->next = NULL;

    if(Head == NULL) {
        printf("Added first Node\n");
        Head = TakeDataNode;
    } else {
        ItrNode = Head;
        while(ItrNode->next) {
            ItrNode = ItrNode->next;
        }
        ItrNode->next = TakeDataNode;
    }

    return Head;
}