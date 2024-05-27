CC = gcc
CFLAGS = -Wall -I. 
LDFLAGS =
OBJFILES += DoubleLinkList.o AddNodeAtEnd.o PrintDoubleLinkList.o PrintDoubleLinkListReverse.o
OBJFILES += AddNodeAtBegin.o AddNodeAtMiddle.o #DeletFirstNode.o
#OBJFILES += AddNodeAtInputLocation.o DeletLastNode.o DeletNodeByInputLocation.o
#OBJFILES += SearchAnElementInList.o SortList.o ReverseList.o
TARGET = DoubleLinkList
all: $(TARGET)
$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET) *~