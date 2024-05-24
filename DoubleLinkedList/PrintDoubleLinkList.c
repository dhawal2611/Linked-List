#include "DoubleLinkList.h"

void vPrintDoubleLinkList(Student *Head) {
    Student *ItrPtr = Head;
    if(Head == NULL) {
        printf("No data available in linked list.\n");
        return;
    }

    printf("Data is : ");
    while(ItrPtr) {
        printf("%d\t", ItrPtr->RollNo);
        ItrPtr = ItrPtr->prev;
    }
    printf("\n");
    return;
}