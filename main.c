//Escriba una función que busque recursivamente un valor en una lista de números
//enteros.
//Diseñar una función que, tomando dos listas de enteros ordenadas, las mezcle y
//genere una nueva lista de enteros, ordenada.
//Escriba una función que busque recursivamente un valor en una lista de números
//enteros.
//Diseñe una función que permita insertar un valor, de forma ordenada, dentro de una
//lista de enteros.

#include "helper.h"


int main()
{
    Lista *l1=newLista();
    agregarNodo(newNodo(1),l1);
    agregarNodo(newNodo(2),l1);
    agregarNodo(newNodo(3),l1);
    agregarNodo(newNodo(4),l1);
    agregarNodo(newNodo(5),l1);

    menor(l1);
    Mayor(l1);


    eliminarNodo(l1,4);

    imrimirLista(l1);

    Lista *l2=newLista();

    agregarNodo(newNodo(6),l2);
    agregarNodo(newNodo(7),l2);
    agregarNodo(newNodo(8),l2);
    agregarNodo(newNodo(9),l2);

    imrimirLista(l2);

    Lista *l3=newLista();

    concatenarLista(l1,l2,l3);

    imrimirLista(l3);

    buscarValor(l1, newNodo(3));

    InsertarValorNuevaEnLista(l2, newNodo(10));

    imrimirLista(l2);



    return 0;
}
