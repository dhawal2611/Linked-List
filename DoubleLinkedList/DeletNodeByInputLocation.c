
#include "SingleLinkList.h"

Student *SDeletNodeByInputLocation (Student *Head) {
    Student *SPreviousNode = NULL, *ItrNode =  NULL;
    int iRollNumToDelet = 0, iCnt = 0;

    if(Head == NULL) {
        printf("There is no node available to delet.\n");
        return NULL;
    }

    printf("Enter the Roll Number to delet\n");
    scanf("%d", &iRollNumToDelet);

    ItrNode = Head;
    iCnt++;
    while(ItrNode->next) {
        ItrNode = ItrNode->next;
        iCnt++;
    }
    ItrNode = Head;
    SPreviousNode = Head;

    for(int iItr = 0; iItr < iCnt; iItr++) {
        if(ItrNode->RollNo == iRollNumToDelet) {
            if(iItr == 0) {
                Head = SDeletFirstNode(Head);
                return Head;
            }
            SPreviousNode->next = ItrNode->next;
            ItrNode->RollNo = 0;
            ItrNode->next = NULL;
            free(ItrNode);
            ItrNode = NULL;
            printf("Node Deleted Successfully\n");
            return Head;
        }
        SPreviousNode = ItrNode;
        ItrNode = ItrNode->next;
    }
    printf("Invaild Roll Num. to Delet.\n\n");
    return Head;
}