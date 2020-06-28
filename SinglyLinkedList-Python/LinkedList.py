class Node:

  def __init__(self, data=0, next=None):
    self.data = data
    self.next = next

  def __str__(self):
    return str(self.data)


class LinkedList:

    def __init__(self):
        self.__head = None
        self.__tail = None
        self.__size = 0

    def addFront(self, data):
        newNode = Node(data, self.__head)
        if (self.empty()):
            self.__tail = newNode  
        self.__head = newNode
        self.__size += 1

    def __str__(self):
        # retorno deve ser uma string:
        s = "["
        node = self.__head
        while node:
            if node.next != None: 
                s += str(node.data) + ' '
            else: 
                s += str(node.data)
            node = node.next
        return s + "]"



    def __recPop(self, no, i, index):
        if (i == index-1):

            if (index == self.size() - 1):
                self.__tail = no
            try:
                no.next = no.next.next; 
            except AttributeError:
                no.next  = None
            
        else: 
            self.__recPop(no.next, i+1, index)

        
    def pop(self, index=0):

        if (index < 0 or index >= self.__size or self.__size == 0):
            return

        if (index == 0):
            try:
                self.__head = self.__head.next
            except AttributeError:
                self.__head  = None
                self.__tail  = None
            
        else:
            self.__recPop(self.__head, 0, index)
        
        self.__size -= 1
                
    def front(self):
        return self.__head.data

    def back(self):
        return self.__tail.data

    def addBack(self, data):
        newNode = Node(data)
        if (not self.empty()):
            self.__tail.next = newNode
        else:
            self.__head = newNode

        self.__tail = newNode
        self.__size += 1

    def empty(self):
        return self.__size == 0

    def size(self):
        return self.__size

    

    def __recursiveReverse(self, No):
        if No == None : return
        self.__recursiveReverse(No.next)
        print(No, end=' ') if self.__head != No else print(No, end='')

    def reverse(self):
        print('[', end='')
        self.__recursiveReverse(self.__head)
        print(']')