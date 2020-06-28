class No:

  def __init__(self, dado=0, prox=None):
    self.dado = dado
    self.prox = prox

  def __str__(self):
    return str(self.dado)


class ListaEncadeada:

    def __init__(self):
        self.__head = None
        self.__tail = None
        self.__size = 0

    def addFront(self, dado):
        novoNo = No(dado, self.__head)
        self.__head = novoNo
        if (self.__tail == None):
            self.__tail = novoNo
        self.__size += 1
    

    def __str__(self):
        # retorno deve ser uma string:
        s = "["
        No = self.__head
        while No:
            s += str(No.dado) + ' ' if No.prox != None else str(No.dado)
            No = No.prox
        return s + "]"

    
        

    # Desafio Implemente quantos métodos você puder

        # addFinal() => Adicionar Elementos  no final, o método add() só adiciona no inicio.
        # size() => Deve retornar a quantidade de Elementos da Lista.
        # pop(index) => Deve remover um elemento baseado em uma posicao indicada no index
            # Se o usuário não definir o index o elemento 0 será removido 
        # reverse() => Deve imprimir a lista em ordem reversa 


    def __recPop(self, no, i, index):
        if (i == index-1):

            if (index == self.size() - 1):
                self.__tail = no

            try:
                no.prox = no.prox.prox; 
            except AttributeError:
                no.prox  = None
            
        else: 
            self.__recPop(no.prox, i+1, index)

        
    def pop(self, index=0):

        if (index < 0 or index >= self.__size or self.__size == 0):
            return

        if (index == 0):
            try:
                self.__head = self.__head.prox
            except AttributeError:
                self.__head  = None
                self.__tail  = None
            
        else:
            self.__recPop(self.__head, 0, index)
        
        self.__size -= 1
                
    def front(self):
        return self.__head.dado

    def back(self):
        return self.__tail.dado

    def addBack(self, dado):
        novoNo = No(dado)
        self.__tail.prox = novoNo
        self.__tail = novoNo
        if (self.__head == None):
            self.__head = novoNo
        self.__size += 1

    def empty(self):
        return self.__size == 0

    def size(self):
        return self.__size

    def __recursiveReverse(self, No):
        if No == None : return
        self.__recursiveReverse(No.prox)
        print(No, end=' ') if self.__head != No else print(No, end='')

    def reverse(self):
        print('[', end='')
        self.__recursiveReverse(self.__head)
        print(']')