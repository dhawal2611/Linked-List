#include "SingleLinkList.h"

void vSearchAnElementInList(Student *Head) {
    Student *ItrPtr = Head;
    int iRollNum = 0, iStopState = 0, iLocation = 1;
    if(Head == NULL) {
        printf("No data available in linked list.\n");
        return;
    }

    printf("Enter the roll number to search\n");
    scanf("%d", &iRollNum);

    while(ItrPtr) {
        if(ItrPtr->RollNo == iRollNum) {
            printf("Data is: %d at location %d\n", ItrPtr->RollNo, iLocation);
            iStopState = 1;
        }
        ItrPtr = ItrPtr->next;
        iLocation += 1;
    }
    if(iStopState == 0) {
        printf("Data not found into the list\n");
    }
    iLocation = 0;
    return;
}