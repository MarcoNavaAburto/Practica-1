//Implementación de la clase ListaAnagrama
#include "NodoAnagrama.h"

using namespace std;

template<typename T>
class ListaAnagrama{
    private:
        NodoAnagrama<T> *cursor;
        int numElementos;

    public:
        ListaAnagrama(); //constructor vacío
        ~ListaAnagrama(); //destructor
        void insertarElemento(T valor); //Insertar un elemento en la lista
        int getNumElementos(); // retornar el número de elementos en la lista
        void corrimientoIzquierda();
        bool estaResuelto(ListaAnagrama<T> &listaAuxiliar);
        void imprime();
        void intercambiaExtremos();
};

//Constructor
template<typename T>
ListaAnagrama<T>::ListaAnagrama()
{
    cursor = nullptr;
    numElementos = 0;
}

//Destructor
template<typename T>
ListaAnagrama<T>::~ListaAnagrama()
{   //Método para eliminar todos los nodos de la lista
    //hacerVacia();
}


//Método para agregar un nuevo nodo a la lista
template<typename T>
void ListaAnagrama<T>::insertarElemento(T valor)
{
    NodoAnagrama<T> *nuevo = new NodoAnagrama<T>(valor);

    if(cursor == nullptr)
    {
        cursor = nuevo;
        cursor->setDato(valor);
        cursor->setAnterior(cursor);
        cursor->setSiguiente(cursor);
    }
    else
    {
        NodoAnagrama<T> *ultimo = cursor->getAnterior();
        ultimo->setSiguiente(nuevo);
        nuevo->setAnterior(ultimo);
        nuevo->setSiguiente(cursor);
        cursor->setAnterior(nuevo);
    }

    numElementos++;
}


//Retornar el número de elementos de la lista
template<typename T>
int ListaAnagrama<T>::getNumElementos()
{
    return numElementos;
}

//Método para hacer el corrimiento de todos los valores de los nodos de la lista
template<typename T>
void ListaAnagrama<T>::corrimientoIzquierda()
{
    int numNodos = 1;
    NodoAnagrama<T> *actual = cursor;

    int v1 = actual->getDato();
    int v2;

    while(numNodos <= numElementos)
    {
        actual = actual->getAnterior();
        v2 = actual->getDato();
        actual->setDato(v1);
        v1 = v2;
        numNodos++;
    }

    cout<<"\nLos elementos se han recorrido una posicion a la izquierda\n"<<endl;
}


//Método para saber si esta resuelto o no el rompecabeza
template<typename T>
bool ListaAnagrama<T>::estaResuelto(ListaAnagrama<T> &listaAuxiliar)
{
    if(numElementos != listaAuxiliar.getNumElementos())
        return false;


    NodoAnagrama<T> *cursor1 = this->cursor;
    NodoAnagrama<T> *cursor2 = listaAuxiliar.cursor;

    for(int i=0; i < numElementos; i++)
    {
        if(cursor1->getDato() != cursor2->getDato())
            return false;

        cursor1 = cursor1->getSiguiente();
        cursor2 = cursor2->getSiguiente();
    }

    return true;
}


//Imprimir los elementos de la lista
template<typename T>
void ListaAnagrama<T>::imprime()
{
    NodoAnagrama<T> *aux = cursor;
    int nodosRecorridos = 1;

    cout<<"\nLos nodos de la lista son los siguientes: "<<endl;

    while(nodosRecorridos <= numElementos)
    {
        cout<<aux->getDato();
        aux = aux->getSiguiente();
        nodosRecorridos++;
    }

    cout<<endl;
}

//Método para hacer el corrimiento a la izquierda de los nodos
template<typename T>
void ListaAnagrama<T>::intercambiaExtremos()
{
    int aux1 = cursor->getDato();
    int aux2 = cursor->getAnterior()->getDato();

    cursor->setDato(aux2);
    cursor->getAnterior()->setDato(aux1);

    cout<<"\nSe han intercambiado los extremos de las listas correctamente\n"<<endl;
}


