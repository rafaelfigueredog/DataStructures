from LinkedList import ListaEncadeada

Lista = ListaEncadeada()


for i in range(20): 

    if (i % 2 == 0):
        Lista.addFront(i)

    else:
        Lista.addBack(i)

    print(Lista, 'Front:' + str(Lista.front()), 'Back: ' + str(Lista.back()))


