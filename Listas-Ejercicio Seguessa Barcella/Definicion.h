#ifndef DEFINICION_H_INCLUDED
#define DEFINICION_H_INCLUDED

struct _nodo{
int dato;
_nodo *ptrsig;
};

typedef struct _nodo *lista; ///TE SIRVE PARA DEFINIR CUALQUIER TIPO DE LSITA SEA CABEZAL O AUX ETC

void mostrar(lista c);
bool esvacia(lista c);
lista insertarppio(lista c,int valor);
lista Insertarnodofinal(lista c,int valor);
void Mostrarrecursivo(lista c);
int primerNodo(lista c);
void valorultimonodo(lista c);
int cantidadvalores(lista c);
float sumavalores (lista c);
float promediovalores (lista c);
lista eliminarnodosconvalor(lista c,int valor);
lista eliminarprimernodo(lista c);
lista eliminarultimonodo(lista c);
lista eliminarnodoenposicion(lista c,int posicion);
int ocurrencias(lista c,int valor);
lista insertardespuesde(lista c,int valor,int posicion);
lista insertarenorden(lista c,int valor);
#endif // DEFINICION_H_INCLUDED
