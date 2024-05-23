CC = gcc
CFLAGS = -Wall -I. 
LDFLAGS =
OBJFILES += SingleLinkList.o PrintSingleLinkList.o AddNodeAtEnd.o AddNodeAtBegin.o DeletFirstNode.o
OBJFILES += AddNodeAtMiddle.o AddNodeAtInputLocation.o DeletLastNode.o DeletNodeByInputLocation.o
OBJFILES += SearchAnElementInList.o SortList.o
TARGET = SingleLinkList
all: $(TARGET)
$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET) *~