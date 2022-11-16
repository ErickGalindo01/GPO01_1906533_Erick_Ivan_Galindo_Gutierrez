#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

//declaracion de variables
int* numart, * anio, registro, n=1, desicion;
string* nombre, * clasificacion, * descripcion, * genero, * caracteristicas, buscar[50];
float* precio, * iva, * total;

//funciones void
void agregar();
void modificar();
void eliminar();
void lista();
void archivo();

int main()
{
	int opc;
	printf("\t  ***GAMEUNIVERSE***");
	printf("\n1.Agregar Articulo \n2.Modificar Articulo \n3.Eliminar Articulo \n4.Lista de Articulos \n5.Limpiar Pantalla \n6.Salir \n");
	scanf("%d", &opc);
	switch (opc)
	{
	case 1: //Agregar Articulo
		agregar();
		system("pause");
		return main();
		break;
	case 2: //Modificar Articulo
		///
		modificar();
		system("pause");
		return main();
		break;
	case 3: //Eliminar Articulo
		///
		eliminar();
		system("pause");
		return main();
		break;
	case 4: //Lista de Articulo
		///
		lista();
		system("pause");
		return main();
		break;
	case 5: //Limpiar Pantalla
		///
		system("cls");
		return main();
		break;
	case 6: //Salir
		///
		printf("Gracias por usar nuestro servicio! \nPresione cualquier tecla para salir\n");
		getch();
		break;
	default:
		printf("Ingrese una opcion correcta \n");
		return main();
	}
}

void agregar()
{
	printf("Cuantos registros desea dar de alta? \n");
	scanf("%d", &registro);
	numart = new int[registro];
	anio = new int[registro];
	nombre = new string[registro];
	descripcion = new string[registro];
	clasificacion = new string[registro];
	genero = new string[registro];
	caracteristicas = new string[registro];
	precio = new float[registro];
	iva = new float[registro];
	total = new float[registro];

	for (int i = 0; i < registro; i++)
	{
		printf("Ingrese el numero del articulo:\n");
		scanf("%d", &numart[i]);
		do
		{
			if (numart[i] = numart[i - 1])
			{
				n = n + 1;
			}
			else
			{
				printf("El numero del articulo ya existe\n");
				printf("Ingrese el numero del articulo:\n");
				scanf("%d", &numart[i]);
			}
		} while (n-1 < registro);
		printf("Ingrese el nombre del videojuego:\n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("Ingrese a%co de lanzamiento:\n", 164);
		scanf("%d", &anio[i]);
		printf("Ingrese la clasificacion del videojuego:\n");
		cin.ignore();
		getline(cin, clasificacion[i]);
		printf("Ingrese descripcion del videojuego:\n");
		cin.ignore();
		getline(cin, descripcion[i]);
		printf("Ingrese genero del videojuego:\n");
		cin.ignore();
		getline(cin, genero[i]);
		printf("Ingrese las caracteristicas del videojuego:\n");
		cin.ignore();
		getline(cin, caracteristicas[i]);
		printf("Ingrese el precio del videojuego:\n");
		scanf("%f", &precio[i]);
		printf("El precio del videojuego es de: $%f\n", precio[i]);
		iva[i] = precio[i] * 0.16;
		printf("El iva es de: $%f\n", iva[i]);
		total[i] = precio[i] + iva[i];
		printf("El precio total es de: $%f\n", total[i]);
		system("pause");
		
	} 
}

void modificar()
{
	int mod;
	//Nota: ver si switch va antes de modificar  antes de for
	printf("Ingrese el numero del articulo que quiera modificar: \n");
	scanf("%d", &mod);

	for (int i = 0; i < registro; i++)
	{
		if (mod == numart[i])
		{
			printf("Ingrese el nombre del videojuego:\n");
			cin.ignore();
			getline(cin, nombre[i]);
			printf("Ingrese a%co de lanzamiento:\n", 164);
			scanf("%d", &anio[i]);
			printf("Ingrese la clasificacion del videojuego:\n");
			cin.ignore();
			getline(cin, clasificacion[i]);
			printf("Ingrese el descripcion del vieojuego:\n");
			cin.ignore();
			getline(cin, descripcion[i]);
			printf("Ingrese genero del videojuego:\n");
			cin.ignore();
			getline(cin, genero[i]);
			printf("Ingrese las caracteristicas del videojuego:\n");
			cin.ignore();
			getline(cin, caracteristicas[i]);
			printf("Ingrese el precio del videojuego:\n");
			scanf("%f", &precio[i]);
			printf("El precio del videojuego es de: $%f\n", precio[i]);
			iva[i] = precio[i] * 0.16;
			printf("El iva es de: $%f\n", iva[i]);
			total[i] = precio[i] + iva[i];
			printf("El precio total es de: $%f\n", total[i]);
			system("pause");
		}
	}

}

void eliminar()
{
	int elim;
	printf("Ingrese el numero del articulo que desea eliminar \n");
	scanf("%d", &elim);

	for (int i = 0; i < registro; i++)
	{
		if (elim == numart[i]);
		{
			numart[i] = 0;
		}
	}
}

void lista()
{
	int opc2;
	printf("1. Clasificacion \n2.Genero \n");
	scanf("%d", &opc2);
	switch (opc2)
	{
	case 1:

		printf("Ingrese la clasificacion a buscar \n");
		cin.ignore();
		getline(cin, buscar[50]);
		for (int i = 0; i < registro; i++)
		{
			if (clasificacion[i] == buscar[50])
			{
				if (numart[i] != 0)
				{
					printf("Articulo: %d \n", numart[i]);
					printf("A%co de lanzamiento: %d \n", 164, anio[i]);
					printf("Nombre: %s \n", &nombre[i].c_str);
					printf("Clasificacion: %s \n", &clasificacion[i].c_str);
					printf("Genero: %s \n", &genero[i].c_str);
					printf("Caracteristicas: %s \n", &caracteristicas[i].c_str);
					printf("Descripcion: %s \n", &descripcion[i].c_str);
					printf("Subtotal: %f \n", precio[i]);
					printf("Iva: %f \n", iva[i]);
					printf("Total: %f \n \n", total[i]);
				}
			}
		}
	break;
	case 2:
		printf("Ingrese el genero a buscar \n");
		cin.ignore();
		getline(cin, buscar[50]);
		for (int i = 0; i < registro; i++)
		{
			if (genero[i] == buscar[50])
			{
				if (numart[i] != 0)
				{
				printf("Articulo: %d", numart[i]);
				printf("A%co de lanzamiento: %d", 164, anio[i]);
				printf("Nombre: %s", &nombre[i].c_str);
				printf("Clasificacion: %s", &clasificacion[i].c_str);
				printf("Genero: %s", &genero[i].c_str);
				printf("Caracteristicas: %s", &caracteristicas[i].c_str);
				printf("Descripcion: %s", &descripcion[i].c_str);
				printf("Subtotal: %f", precio[i]);
				printf("Iva: %f", iva[i]);
				printf("Total: %f", total[i]);
				}
			}
		}
	break;

	default:
		printf("Ingrese la opcion correcta");
		return lista();
	}
}
