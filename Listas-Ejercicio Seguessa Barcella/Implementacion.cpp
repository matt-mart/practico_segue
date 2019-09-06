using namespace std;

bool esvacia(lista c)
{
  if (c==NULL)
  {
    return true;
  }
  else
  {
    return false;
  }

}

void mostrar(lista c)
{
  if(esvacia(c))
  cout<<"Lista Vacia";
  else
  {
    while(!esvacia(c))
    {
     cout<<(*c).dato<<endl;
      c=(*c).ptrsig;
    }

  }
cout<<"NULL"<<endl;
}

lista insertarppio(lista c,int valor)
{
  lista nuevonodo=new _nodo;
  (*nuevonodo).dato=valor;
  (*nuevonodo).ptrsig=c;
  return nuevonodo;
}

lista Insertarnodofinal(lista c,int valor)
{
  lista nuevonodo=new _nodo;
  lista anterior=new _nodo;
  anterior=c;
  while((*anterior).ptrsig!=NULL)
    {
      anterior=(*anterior).ptrsig;
    }
    (*anterior).ptrsig=nuevonodo;
    (*nuevonodo).dato=valor;
      (*nuevonodo).ptrsig=NULL;

    return c;
}

void Mostrarrecursivo(lista c)
{
  if(esvacia(c))
  {
    cout<<"Lista Vacia"<<endl;
  }
  else
  {
    cout<<(*c).dato<<endl;
    if((*c).ptrsig!=NULL)
    {
    return Mostrarrecursivo((*c).ptrsig);
    }

  }
  cout<<"NuLL"<<endl;
}

int primerNodo(lista c)
{
if(esvacia(c))
{
  cout<<"Es vacia xD"<<endl;
}
else
{
  cout<<(*c).dato<<endl;
}
return (*c).dato;
}

void valorultimonodo(lista c)
{
  lista aux=new _nodo;
  aux=c;
  lista anterior=new _nodo;
  anterior=aux-1;
  if(esvacia(c))
  {
    cout<<"Es vacia xD"<<endl;
  }
  else
    {
        while(!esvacia(c) ||(*aux).ptrsig!=NULL)
        {
         (*aux).ptrsig;
        }
        cout<<(*anterior).dato<<endl;
    }
}

int cantidadvalores(lista c)
{
  int contador=0;
  cout<<"rocha puto"<<endl;  if(esvacia(c))
  {
    cout<<"Es vacia"<<endl;
  }
  else
  {
    while((*c).ptrsig!=NULL)
      {
        contador++;
      }
  }

  cout<<contador;
return contador;
}

 float sumavalores (lista c)
 {
    float suma=0;
    if(esvacia(c))
      {
        cout<<"Es vacia "<<endl;
      }
    while((*c).dato!=NULL)
      {
        suma=suma+(*c).dato;
      }
    return suma;
 }

 float promediovalores (lista c)
 {
    float promedio=0;
      if()

 }
