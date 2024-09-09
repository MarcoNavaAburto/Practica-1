//Código que ejecuta la solución del anagrama

//Librerias a ocupar
#include<iostream>
#include "RompecabezaAnagrama.h"

using namespace std;

int main()
{
    int repetir = 1;
    int opcion;

    //Creación de un objeto de tipo RompecabezaAnagrama
    RompecabezaAnagrama juego("leo", "loe");

    cout<<"Menu del juego de anagrama\n"<<endl;
    cout<<"Palabra destino que se quiere formar: leo\n"<<endl;

    while(repetir == 1)
    {
        cout<<"Opcion\tAccion a realizar\n1\tVerificar si esta resuelto\n2\tImprimir la configuracion actual del rompecabezas\n3\tIntercambiar extremos\n4\tRecorrer las letras una posicion a la izquierda\n5\tSalir del juego"<<endl;

        cout<<"Ingrese la opcion de la accion que desea realizar: "<<endl;
        cin>>opcion;

        switch(opcion)
        {
            //Indica si se ha resuelto o no el rompecabezas
            case 1:
                    if(juego.estaResuelto())
                        cout<<"\nEl rompecabezas ha sido solucionado\n"<<endl;
                    else
                        cout<<"\nEl rompecabezas aun no ha sido solucionado\n"<<endl;
                break;

            //Se invoca a un método para imprimir la configuración actual del rompecabezas
            case 2:
                juego.imprime();
                break;

            //Se invoca a un método para intercambiar los extremos de ambas listas
            case 3:
                juego.intercambiaExtremos();
                break;

            //Se invoca a un método para recorrer las letras una posición a al izquierda
            case 4:
                juego.corrimientoIzquierda();
                break;

            //Se cambia la variable de control para salir del ciclo y asi terminar la ejecución del programa
            case 5:
                repetir = 2;
                break;

            //En caso de que se haya ingresado una opcion que no sea valida se manda el siguiente mensaje en pantalla
            default:
                cout<<"Favor de ingresar una opcion que sea correcta"<<endl;
        }

    }

    //Se invoca al destructor de objetos
    juego.~RompecabezaAnagrama();


    //Fin del proceso
    system("pause");
    return EXIT_SUCCESS;
}

