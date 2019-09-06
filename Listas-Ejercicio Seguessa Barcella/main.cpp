#include <iostream>
 #include"Definicion.h"
 #include "Implementacion.cpp"
using namespace std;

int main()
{
    lista cabezal=NULL;
    int x=0;
    if(esvacia(cabezal)==1)
      {
      cout<<"LISTA VACIA"<<endl;
      }
    else
    {
    cout<<"Lista no vacia"<<endl;
    }
    cout<<"------------"<<endl;

  cabezal=insertarppio(cabezal,15);
  cabezal=insertarppio(cabezal,89);
  cabezal=insertarppio(cabezal,10);
  mostrar(cabezal);
  cout<<"------------"<<endl;
  Mostrarrecursivo(cabezal);
  cout<<"------------"<<endl;
  x=primerNodo(cabezal);
  cout<<"x ="<<x<<endl;
  cout<<"------------"<<endl;

  cabezal=Insertarnodofinal(cabezal,6);
  cout<<"Valor ultimo";
  valorultimonodo(cabezal);

  Mostrarrecursivo(cabezal);

  valorultimonodo(cabezal);
   cout<<"------------"<<endl;

  cantidadvalores(cabezal);

    return 0;
}
