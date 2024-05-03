CC = gcc
CFLAGS = -Wall -I. 
LDFLAGS =
OBJFILES = SingleLinkList.o PrintSingleLinkList.o AddNodeAtEnd.o AddAtBegin.o DeletFirstNode.o
TARGET = SingleLinkList
all: $(TARGET)
$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET) *~