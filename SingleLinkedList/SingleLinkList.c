#include "SingleLinkList.h"

void vPrintOptions() {
    printf("Enter below options to select\n \
    1. Add Node at Last\n \
    2. Print all Nodes\n \
    3. Add Node at Begin\n \
    4. Delet 1st Node\n \
    128. Exit the code\n");
}

int main() {
    Student *S1 = NULL;

    int Option = 0;

    while (1) {
        vPrintOptions();
        scanf("%d", &Option);
        
        switch (Option) {
            case 1:
                S1 = SAddNodeAtEnd(S1);
                break;
            case 2:
                vPrintSingleLinkList(S1);
                break;
            case 3:
                S1 = SAddAtBegin(S1);
                break;
            case 4:
                S1 = SDeletFirstNode(S1);
                break;
            case 128:
                printf("Exiting the code\n");
                exit(0);
            default:
                printf("Invalid Option Entered\nPlease select proper Option\n");
                break;
        }

    }
}
