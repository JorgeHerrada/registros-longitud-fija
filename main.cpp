#include "Pelicula.h"


int main()
{
    Pelicula objeto;
    int op;
    do
    {
        cout<<"\nIngresa el numero de la opcion: \n1.Capturar\n2.Imprimir todo \n3.Buscar \n4.Eliminar \n5.Modificar \n6.Salir \n";
        cin>>op;
        switch(op)
        {
        case 1:
            objeto.Capturar();
            break;
        case 2:
            objeto.Imprimir();
            break;
        case 3:
            objeto.Buscar();
            break;
        case 4:
            objeto.Eliminar();
            break;
        case 5:
            objeto.Modificar();
            break;
        default:
            break;
        }
    }while(op!=6);
    return 0;
}