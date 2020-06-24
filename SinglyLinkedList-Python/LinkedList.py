class No:
  def __init__(self, dado=None, proximo=None):
    self.dado = dado
    self.proximo = proximo

  def __str__(self):
    return str(self.dado)


class ListaEncadeada:

    def __init__(self):
        self.head = None
        self.tail = None
        self.len = 0

    def add(self, dado):
        novoNo = No(dado)
        novoNo.proximo = self.head
        self.head = novoNo

        if (self.tail == None):
            self.tail = novoNo

        self.len += 1
    

    def __str__(self):
        # retorno deve ser uma string:
        s = "["
        No = self.head
        while No:
            s += str(No.dado) + ' ' if No.proximo != None else str(No.dado)
            No = No.proximo
        return s + "]"

    
        

    # Desafio Implemente quantos métodos você puder

        # addFinal() => Adicionar Elementos  no final, o método add() só adiciona no inicio.
        # size() => Deve retornar a quantidade de Elementos da Lista.
        # pop(index) => Deve remover um elemento baseado em uma posicao indicada no index
            # Se o usuário não definir o index o elemento 0 será removido 
        # reverse() => Deve imprimir a lista em ordem reversa 


    