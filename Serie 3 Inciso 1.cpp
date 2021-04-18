// Mynor Ivan Aldana Marin
//0909-20-5400
// serie 3 Inciso 1

// Declaración de Librerias 
#include <iostream>
#include <conio.h>

using namespace std;

// Declaración de Variables y Vectores 
int alfa[3][3]; // Filas y Columnas
int total[3]; // Filas
int e, h, op; // Variables y opcion 

// Estructura para Ingresar datos al curso
void ingresoDatos(){
	for ( e = 0; e <= 2; e++ ){ // Saltos en cada fila
		for ( h = 0; h <= 2; h++ ){ // Saltos en cada columna
			cout << "Ingreso dato en la fila " << e + 1 << " columna " << h + 1 << " = "; 
			cin >> alfa[e][h]; // Ingreso de Datos
		}
	}
}

//  Estructura para Sumar filas de la MAtriz ALFA 
void sumaTotal(){
	total[0] = alfa[0][0] + alfa[1][1] + alfa[2][2];
	total[1] = alfa[2][0] + alfa[2][1] + alfa[2][2];
	total[2] = alfa[2][0] + alfa[1][1] + alfa[0][2];
}

// Estructura para Mostrar Matriz ALFA y Vector TOTAL 
void mostrarMatrizVector(){
	cout << " Matriz ALFA " << endl;
	for ( e = 0; e <= 2; e++ ){ // Saltos en cada fila
		cout << "  " << alfa[e][0] << "  " << alfa[e][1] << "  " << alfa[e][2] << endl;
	}
	
	cout << endl << endl << endl << endl << endl; // 5 espacios
	
	cout << "Vector TOTAL" << endl;
	cout << "  " << total[0] << "  " << total[1] << "  " << total[2] << endl;
}

// Estructura Principal C++ 
int main(){	
	do{
		// Mostrar en Pantalla
		cout << "Bienvenidos al programa Vector Curso" << endl;
		cout << "1. Ingresar datos a la matriz ALFA" << endl;
		cout << "2. Calculo de sumas de filas de la matriz" << endl;
		cout << "3. Mostrar la matriz ALFA y el vector TOTAL" << endl;
		cout << "4. Finalizar" << endl;
		cout << "Elija Una Opcion --> "; cin >> op; // Ingreso de Opcion
		cout << endl << endl;
		
		switch ( op ){ //Segun la opcion elegida
			case 1: 
				ingresoDatos(); // Llamado de la funcion de ingreso de datos
				system ("cls");  // Limpiamos pantalla
				break; // Salir Switch
			case 2: 
				sumaTotal(); // Llamado de la funcion Sumar filas de la MAtriz ALFA
				cout << "Las operaciones se han realizado con exito" << endl;
				system ("pause"); // Detener Programa
				system ("cls"); // Limpiar Pantalla 
				break;
			case 3: 
				mostrarMatrizVector(); // Llamamos a la funcion Mostrar Matriz ALFA y Vector TOTAL
				getch(); // Detener Programa
				system ("cls"); // Limpiar Pantalla
				break; // Salir Switch
			case 4: break; // Salir Switch
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause"); // Detener Programa
				system ("cls"); // Limpiar Pantalla
		}
	} while ( op != 4 ); // Mientras op sea diferente a 4 seguir con el do While
}

// Mynor Ivan Aldana Marin
//0909-20-5400
