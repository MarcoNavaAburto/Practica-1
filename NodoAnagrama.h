//Implementación de la clase NodoAnagrama usando plantilla genérica
template<typename T>

class NodoAnagrama{
    //Atributos
    private:
        NodoAnagrama<T> *anterior; //Apuntador que apunta la nodo anterior
        NodoAnagrama<T> *siguiente; //Apuntador que apunta al nodo siguiente
        T dato; //Letra que se guardara en el nodo

    public:
        NodoAnagrama(); //Constructor vacío
        NodoAnagrama(T dat); //Constructor con parámetros
        ~NodoAnagrama(); //Destructor
        void setDato(T dat); //Método que establece un valor
        T getDato(); //Devuelve la letra que está guardada en el nodo
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

//Método getter que devuelve la letra que tiene un nodo
template<typename T>
T NodoAnagrama<T>::getDato()
{
    return dato;
}


//Método que devuelve el nodo anterior
template<typename T>
NodoAnagrama<T>* NodoAnagrama<T>::getAnterior()
{
    return anterior;
}


//Método que devuelve el nodo siguiente de un nodo
template<typename T>
NodoAnagrama<T>* NodoAnagrama<T>::getSiguiente()
{
    return siguiente;
}


//Método que establece un enlace anterior al nodo actual
template<typename T>
void NodoAnagrama<T>::setAnterior(NodoAnagrama<T> *aux)
{
    anterior = aux;
}


//Método que establece un enlace siguiente al nodo actual
template<typename T>
void NodoAnagrama<T>::setSiguiente(NodoAnagrama<T> *aux)
{
    siguiente = aux;
}


//Método que establece el valor de la letra que guardara el nodo
template<typename T>
void NodoAnagrama<T>::setDato(T dat)
{
    dato = dat;
}
