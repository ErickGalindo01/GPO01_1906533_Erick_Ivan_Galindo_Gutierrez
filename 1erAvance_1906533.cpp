#include <iostream>
#include <string.h>
#include <string>
#include <conio.h>
//Utilice el compilador web

using namespace std;
int main()
{
    int numart, lan, opc, preuni, iva, total;
    string vid, desc, gen, cla;

    cout << "\t ***Tienda de Videojuegos GamerUniverse*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opc;

    switch (opc)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo\n";
        cin >> numart;
        cout << "Ingrese el nombre del videojuego\n";
        cin.ignore();
        getline(cin, vid);
        cout << "Ingrese año de lanzamiento\n";
        cin >> lan;
        cout << "Ingrese la clasificacion del videojuego\n"; //usar clasificacion mexicana
        cin.ignore();
        getline(cin, cla);
        cout << "Ingrese el descripcion del vieojuego\n";
        cin.ignore();
        getline(cin, desc);
        cout << "Ingrese genero del videojuego\n";
        cin.ignore();
        getline(cin, gen);
        cout << "Ingrese el precio del videojuego\n";
        cin >> preuni;
        iva=preuni*0.16;
        total=preuni+iva;
        cout<< "Precio total es: "<<total<<"\n";
        
        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("clear");
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }
}