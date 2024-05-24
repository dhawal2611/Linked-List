#include "DoubleLinkList.h"

void vPrintDoubleLinkListReverse(Student *Head) {
    Student *ItrPtr = Head;
    if(Head == NULL) {
        printf("No data available in linked list.\n");
        return;
    }

    ItrPtr = Head;
    while(ItrPtr->next) {
        ItrPtr = ItrPtr->next;
    }

    printf("Data in Reverse order is : ");
    while(ItrPtr) {
        printf("%d\t", ItrPtr->RollNo);
        ItrPtr = ItrPtr->prev;
    }
    printf("\n");
    return;
}