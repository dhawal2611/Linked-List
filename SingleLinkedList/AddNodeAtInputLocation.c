#include "SingleLinkList.h"

Student *SAddNodeAtInputLocation (Student *Head) {
    Student *TakeDataNode, *ItrNode;
    int iCnt = 0, iRollToAddAfterIt = 0;

    if(Head == NULL) {
        printf("There is no node available to add at input location.\n");
        return NULL;
    }

    TakeDataNode = calloc(1, sizeof(struct SLL));

    printf("Enter Roll No.: ");
    scanf("%d", &TakeDataNode->RollNo);
    printf("Enter Roll Number, After which it should be inserted: ");
    scanf("%d", &iRollToAddAfterIt);

    TakeDataNode->next = NULL;

    ItrNode = Head;
    iCnt++;
    while(ItrNode->next) {
        ItrNode = ItrNode->next;
        iCnt++;
    }
    printf("Total Number of nodes available are: %d\n", iCnt);
    ItrNode = Head;    printf("Total Number of nodes avber given\nPlease enter vaild Roll Num..\n\n");

    for(int iItr = 0; iItr < iCnt; iItr++) {
        if(ItrNode->RollNo == iRollToAddAfterIt) {
            TakeDataNode->next = ItrNode->next;
            ItrNode->next = TakeDataNode;
            return Head;
        }
        ItrNode = ItrNode->next;
    }
    printf("Total Number of nodes avber given\nPlease enter vaild Roll Num..\n\n");
    return Head;
}