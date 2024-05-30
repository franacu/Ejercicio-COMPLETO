//
// Created by Fran on 30/05/2024.
//
#include "stdlib.h"
#include "helper.h"
#include "stdio.h"
Nodo *newNodo(int num)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
        {
            aux->num=num;
            aux->sig=NULL;
        }
    return aux;
}
Lista *newLista()
{
    Lista *aux= malloc(sizeof(Lista));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
        {
            aux->cab=NULL;
        }
    return aux;
}
void agregarNodo(Nodo *nodoAI,Lista *lista)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
        {
            Nodo *aux=lista->cab;
            while(aux->sig!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=nodoAI;
        }
}
void imrimirLista(Lista *lista)
{
    Nodo *aux=lista->cab;
    printf("\nLista:\n");
    while(aux!=NULL)
    {
        printf("%d\n",aux->num);
        aux=aux->sig;
    }
}
void eliminarNodo(Lista *lista,int nodoAE)
{
    Nodo *act=lista->cab;
    Nodo *ant=NULL;
    while(act!=NULL)
    {
        if(act->num==nodoAE)
        {
            if(ant==NULL)
            {
                lista->cab=act->sig;
            }else
            {
                ant->sig=act->sig;
            }
        }
        ant=act;
        act=act->sig;
    }
}
void Mayor(Lista *lista)
{
    int mayor=lista->cab->num;
    Nodo *aux=lista->cab;
    while (aux!=NULL)
    {
        if(aux->num>mayor)
        {
            mayor=aux->num;
        }
        aux=aux->sig;
    }
    printf("\nEl nro mayor es:%d",mayor);
}
void menor(Lista *lista)
{
    Nodo *aux=lista->cab;

    int menor=lista->cab->num;
    while (aux!=NULL)
    {
        if(aux->num<menor)
        {
            menor=aux->num;
        }
        aux=aux->sig;
    }
    printf("\nEl nro menor es:%d",menor);

}
void concatenarLista(Lista *lista1,Lista *lista2,Lista *lista3)
{
    Nodo *aux1=lista1->cab;

    while(aux1->sig!=NULL)
    {
        aux1=aux1->sig;
    }
    aux1->sig=lista2->cab;
    lista3->cab=lista1->cab;

    printf("Lista concatenada:\n");
    Nodo *aux3=lista3->cab;

    while (aux3!=NULL)
    {
        printf("%d\n",aux3->num);
        aux3=aux3->sig;
    }
}
void buscarValor(Lista *lista,Nodo *nodoAB)
{
    Nodo *act=lista->cab;

    int cont=0;
    while (act!=NULL)
    {
        if(act->num==nodoAB->num)
        {
            printf("El valor se encuentra en la lista!!\n");
            if(cont==0)
            {
                printf("El nro a buscar se encuentra en la primer posicion\n");
            }else
                {
                    printf("El nro a buscar se encuentra en la posicion %d\n",cont+1);
                }
        }
        act=act->sig;
        cont++;
    }
}
void InsertarValorNuevaEnLista(Lista *lista, Nodo *nodoAI) {
    Nodo *act = lista->cab;

    // Caso especial: La lista está vacía o el nuevo nodo debe ser el primero
    if (lista->cab == NULL || lista->cab->num >= nodoAI->num) {
        nodoAI->sig = lista->cab;  // Acomodo la posición
        lista->cab = nodoAI;       // Inserto valor
    } else {
        // Buscar la posición correcta para el nuevo nodo
        while (act->sig != NULL && act->sig->num < nodoAI->num) {
            act = act->sig;
        }
        nodoAI->sig = act->sig;
        act->sig = nodoAI;
    }
}


