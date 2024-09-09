//Implementaci�n de la clase NodoAnagrama usando plantilla gen�rica
template<typename T>

class NodoAnagrama{
    //Atributos
    private:
        NodoAnagrama<T> *anterior; //Apuntador que apunta la nodo anterior
        NodoAnagrama<T> *siguiente; //Apuntador que apunta al nodo siguiente
        T dato; //Letra que se guardara en el nodo

    public:
        NodoAnagrama(); //Constructor vac�o
        NodoAnagrama(T dat); //Constructor con par�metros
        ~NodoAnagrama(); //Destructor
        void setDato(T dat); //M�todo que establece un valor
        T getDato(); //Devuelve la letra que est� guardada en el nodo
        NodoAnagrama *getAnterior(); //Devuelve el nodo anterior del nodo con el que se este trabajando actualmente
        NodoAnagrama *getSiguiente(); //Devuelve el nodo siguiente del nodo con el que se estre trabajando actualmente
        void setSiguiente(NodoAnagrama<T> *aux); // Establece el enlace del nodo siguiente con el nodo que se este trabajando actualmente
        void setAnterior(NodoAnagrama<T> *aux); //Establece el enlace del nodo anterior con el nodo con el que se este trabajando actualmente

};

//Constructor vacio
template<typename T>
NodoAnagrama<T>::NodoAnagrama(){

}


//Constructor con parametros
template<typename T>
NodoAnagrama<T>::NodoAnagrama(T dat)
{
    dato = dat;
    anterior = nullptr;
    siguiente = nullptr;
}


//Destructor
template<typename T>
NodoAnagrama<T>::~NodoAnagrama(){

}

//M�todo getter que devuelve la letra que tiene un nodo
template<typename T>
T NodoAnagrama<T>::getDato()
{
    return dato;
}


//M�todo que devuelve el nodo anterior
template<typename T>
NodoAnagrama<T>* NodoAnagrama<T>::getAnterior()
{
    return anterior;
}


//M�todo que devuelve el nodo siguiente de un nodo
template<typename T>
NodoAnagrama<T>* NodoAnagrama<T>::getSiguiente()
{
    return siguiente;
}


//M�todo que establece un enlace anterior al nodo actual
template<typename T>
void NodoAnagrama<T>::setAnterior(NodoAnagrama<T> *aux)
{
    anterior = aux;
}


//M�todo que establece un enlace siguiente al nodo actual
template<typename T>
void NodoAnagrama<T>::setSiguiente(NodoAnagrama<T> *aux)
{
    siguiente = aux;
}


//M�todo que establece el valor de la letra que guardara el nodo
template<typename T>
void NodoAnagrama<T>::setDato(T dat)
{
    dato = dat;
}
