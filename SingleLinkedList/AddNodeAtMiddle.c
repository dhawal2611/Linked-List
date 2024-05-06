
#include "SingleLinkList.h"

Student *SAddNodeAtMiddle (Student *Head) {
    Student *TakeDataNode, *ItrNode;
    int iCnt = 0;

    TakeDataNode = calloc(1, sizeof(struct SLL));

    printf("Enter Roll No.: ");
    scanf("%d", &TakeDataNode->RollNo);

    TakeDataNode->next = NULL;

    if(Head == NULL) {
        printf("Adding first Node\n");
        Head = TakeDataNode;
    } else {
        ItrNode = Head;
        iCnt++;
        while(ItrNode->next) {
            ItrNode = ItrNode->next;
            iCnt++;
        }
        printf("Total Number of nodes available are: %d\n", iCnt);
        ItrNode = Head;

        if((iCnt % 2) == 0) {
            iCnt /= 2;
        } else {
            iCnt = (iCnt/2) + 1;
        }
        printf("Inerting After %d Node\n", iCnt);
        
        for(int iItr = 1; iItr < iCnt; iItr++) {
            ItrNode = ItrNode->next;
        }
        TakeDataNode->next = ItrNode->next;
        ItrNode->next = TakeDataNode;
    }

    return Head;
   
}

