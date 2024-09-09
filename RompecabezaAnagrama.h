#include "listaAnagrama.h"

//Implementación de la clase RompecabezaAnagrama
class RompecabezaAnagrama
{
    private:
        ListaAnagrama<char> *solucion;
        ListaAnagrama<char> *rompecabeza;

    public:
        RompecabezaAnagrama(char [], char []);
        ~RompecabezaAnagrama();
        void corrimientoIzquierda();
        void intercambiaExtremos();
        void imprime();
        bool estaResuelto();

};

//Constructor
RompecabezaAnagrama::RompecabezaAnagrama(char respuesta[], char inicio[])
{
    solucion = new ListaAnagrama<char>();
    rompecabeza = new ListaAnagrama<char>();

    for(int i=0;respuesta[i] != '\0' && inicio[i] != '\0';i++)
    {
        solucion->insertarElemento(respuesta[i]);
        rompecabeza->insertarElemento(inicio[i]);
    }
}

//Destructor
RompecabezaAnagrama::~RompecabezaAnagrama()
{

}

//Correr a la izquierda todos los elementos
void RompecabezaAnagrama::corrimientoIzquierda()
{
    rompecabeza->corrimientoIzquierda();
}

//Intercambiar los extremos de la Lista (los valores del frente y el cursor)
void RompecabezaAnagrama::intercambiaExtremos()
{
    rompecabeza->intercambiaExtremos();
}


//Imprimir todos los nodos de la lista
void RompecabezaAnagrama::imprime()
{
    rompecabeza->imprime();
}


//Método para saber si ya fue resuelto el RompecabezaAnagrama
bool RompecabezaAnagrama::estaResuelto()
{
    return rompecabeza->estaResuelto(*solucion);
}
