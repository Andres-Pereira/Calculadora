// Calculadora Erick Refactorizacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
	//char op; 1) Uncommunicative Name -- Refactorizacion: Op->Operacion
	char operacion;
	//int n1, n2, r; 2) Excessively short identifiers -- Refactorizacion: n1->Numero1 n2->Numero2 r->Respuest
	int numero1, numero2, respuesta; 
	do {
		/*cout << "\n" << endl;
		cout << "Suma" << endl;
		cout << "Resta" << endl;
		cout << "Multiplicacion" << endl;
		cout << "Division" << endl;
		//3) Uncontrolled side effects -- Refactorizacion: Cambiar el estilo de compilacion, aumentar numeros y seniales de compilacion*/

		cout << "\n" << endl;
		cout << "1.- Suma" << endl;
		cout << "2.- Resta" << endl;
		cout << "3.- Multiplicacion" << endl;
		cout << "4.- Division" << endl;


		do {
			cout << "\nEscriba el numero de operacion que desea realizar: "; // 3.2) Uncontrolled side effects -- Se cambio la sintaxis de la pregunta
			cin >> operacion;
		} while (operacion < '1' || operacion > '5');

		cout << "Ingrese numero 1: " << endl;
		cin >> numero1;
		cout << "Ingrese numero 2" << endl;
		cin >> numero2;

		switch (operacion) {
		case '1':
			// 5) Duplicated code: -- Refactorizacion: El ingreso de los numeros se ingresaran antes del switch
			respuesta = numero1 + numero2;
			cout << "\n   " << numero1 << " + " << numero2 << " = " << respuesta;
			break;

		case '2':
			respuesta = numero1 - numero2;
			cout << "\n   " << numero1 << " - " << numero2 << " = " << respuesta;
			break;

		case '3':
			respuesta = numero1 * numero2;
			cout << "\n   " << numero1 << " * " << numero2 << " = " << respuesta;
			break;

		case '4':
			//if (numero2 != 0) // 4) Little comments -- Refactorizacion: Se aumento un comentario para indicar la funcion del if
			if (numero2 != 0)//If para controlar el denomidor 0 de la division
			{
				respuesta = numero1 / numero2;
				cout << "\n   " << numero1 << " / " << numero2 << " = " << respuesta;
			}
			else 
			{
				cout << "\n   ERROR \n";
			}
		}
		
	} while (operacion != '5');
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
