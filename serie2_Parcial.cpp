// Mynor Ivan Aldana Marin
//0909-20-5400
// Declaración de Librerias
#include <iostream>
#include <conio.h>

using namespace std;

// Declaración de Variables y Vectores 
int curso[2][5]; // Vector del estudiante
int sumCurso[2]; // vector del curso
float promCurso[2]; // suma de vector del curso
int t, d, op; // Variables y opcion

// Estructura para el Ingreso de notas de cada curso
void ingresoDatos(){
	for ( t = 0; t <= 1; t++ ){ // Saltos en cada curso 1 y 2
		for ( d = 0; d <= 4; d++ ){ // Saltos en cada estudiante "1 al 5"
			cout << "Ingreso de nota en la clase " << t + 1 << " del estudiante " << d + 1 << " = "; 
			cin >> curso[t][d]; // Ingreso de Datos
		}
	}
}

// Estructura para realizar el calculo promedio de cada curso
void calculoPromedio(){
	for ( t = 0; t <= 1; t++ ){ // Saltos en cada curso 1 y 2
		for ( d = 0; d <= 4; d++ ){ // Saltos en cada estudiante 1 al 5
			sumCurso[t] += curso[t][d]; // Suma de cada clase 
		}
		promCurso[t] = sumCurso[t] / 5; // Promedio de cada clase
	}
}

// Estructura para visualizar los Promedios y los vectores
void mostrarVectores(){
	cout << "Vector Curso 1"; 
	for ( d = 0; d <= 4; d++ ){ // Saltos en cada estudiante "1-5" del primer curso
		cout << "     " << curso[0][d];
	}
	cout << "\nEl promedio del curso es:  " << promCurso[0]; // Mostrar promedio
	
	cout << "Vector Curso 2";
	for ( d = 0; d <= 4; d++ ){ // Saltos en cada estudiante "1-5" del segundo curso
		cout << "     " << curso[1][d];
	}
	cout << "\nEl promedio del curso es:  " << promCurso[1]; // Mostrar promedio
}

//  Estructura Principal 
int main(){	
	do{
		// Mostrar en Pantalla
		cout << "Bienvenidos al programa Vector Curso" << endl;
		cout << "1. Ingresar datos de cada curso" << endl;
		cout << "2. Mostrar la primera nota del Vector 1" << endl;
		cout << "3. Mostrar la última nota del Vector 2" << endl;
		cout << "4. Calcule el promedio de los cursos." << endl;
		cout << "5. Mostrar los dos Vectores, y el resultado Promedio de cada curso." << endl;
		cout << "6. Finalizar." << endl;
		cout << "Elija Una Opcion --> "; cin >> op; // Ingreso de Opcion
		cout << endl << endl;
		
		switch ( op ){ //Segun la opcion elegida
			case 1: 
				ingresoDatos(); // Llamado de la funcion de ingreso de datos
				system ("cls");  // Limpiamos pantalla
				break; // Salir Switch
			case 2: 
				cout << "La primera nota del Vector 1 es: " << curso[0][0];  // Mostrar 
				getch(); // Detener Programa
				system ("cls"); // Limpiar Pantalla 
				break;
			case 3: 
				cout << "La ultima nota del Vector 2 es: " << curso[1][4]; 
				getch(); // Detener Programa
				system ("cls"); // Limpiar Pantalla
				break; // Salir Switch
			case 4: 
				calculoPromedio();
				cout << "El calculo se ha Realizado Exitosamente" << endl;
				system ("pause"); // Detener Programa
				system ("cls"); // Limpiar Pantalla
				break; // Salir Switch
			case 5: 
				mostrarVectores();
				system ("cls"); // Detener Programa
				break; // Salir Switch
			case 6: break; // Salir Switch
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause"); // PDetener Programa
				system ("cls"); // Limpiar Pantalla
		}
	} while ( op != 6 ); // Mientras op sea diferente a 6 seguir con el do While
}
// Mynor Ivan Aldana Marin
//0909-20-5400
