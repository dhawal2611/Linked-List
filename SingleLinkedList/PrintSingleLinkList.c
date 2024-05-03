#include "SingleLinkList.h"

void vPrintSingleLinkList(Student *Head) {
    Student *ItrPtr = Head;
    if(Head == NULL) {
        printf("No data available in linked list.\n");
    }

    while(ItrPtr) {
        printf("Data is : %d\n", ItrPtr->RollNo);
        ItrPtr = ItrPtr->next;
    }
}