//
// Created by Fran on 30/05/2024.
//

#ifndef COLASYPILAS_HELPER_H
#define COLASYPILAS_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo *sig;
}Nodo;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(int num);
Lista *newLista();
void agregarNodo(Nodo *nodoAI,Lista *lista);
void imrimirLista(Lista *lista);
void eliminarNodo(Lista *lista,int nodoAE);
void Mayor(Lista *lista);
void menor(Lista *lista);
void concatenarLista(Lista *lista1,Lista *lista2,Lista *lista3);
void buscarValor(Lista *lista,Nodo *nodoAB);
void InsertarValorNuevaEnLista(Lista *lista,Nodo *nodaAI);

#endif //COLASYPILAS_HELPER_H
