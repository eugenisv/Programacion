// Nombre/Apellido: Eugenis Villamizar Fecha: 11 de Junio de 2022
#include <iostream>
#include <string> 
#include <cmath> //para poder elevar al cuadrado y sacar raiz cuadrada
using namespace std;
// Valores que utilizarán las funciones
float g = 9.81;
float t;
float h;
// Nombrando las funciones que están declaradas en la parte de abajo
float altura();
float tiempo();
float gravedad();


int main() {
	//Esta es la explicacion de lo que hace el programa
	string explicacion = "Se le llama caída libre al movimiento que se debe unicamente a la influencia de la gravedad. \n"
		"Se puede conocer la altura de la que un objeto fue lanzado a partir de la siguiente formula. \n\n"
		"h = (1/2) * g * t^2 \n\n"
		"Donde g es la gravedad  (que en la tierra se toma como 9.81m/s^2). \n"
		"t es el tiempo que le tomó al objeto llegar al piso \nY h es la altura. \n"
		"Despejando, las otras variables tambien pueden ser calculadas \n" "Que te gustaria calcular a partir de ciertos datos?\n"
		"Escribe a para calcular altura a partir del tiempo \n"
		"Escribe b para calcular el tiempo a partir de una altura \n"
		"Escribe c para calcular la gravedad a partir de una altura y el tiempo";

	string nombre; // Para ser utilizado en el saludo
	char seleccion; // Así la persona escogerá lo que quiere calcular
	bool coincideA, coincideB, coincideC; // Para comprobar que fue lo que selecciono

	// Saludando y preguntando el nombre
	cout << "Hola, como te llamas?" << endl;
	cin >> nombre; // se almacena el valor en la variable nombre
	cout << "Mucho gusto, " << nombre << "." << endl << endl;
	cout << explicacion << endl << endl; // Se imprime la explicación
	cin >> seleccion; // se toma el valor de lo que la persona seleccionó

	//comprobando qué selecciono
	coincideA = seleccion == 'a';
	coincideB = seleccion == 'b';
	coincideC = seleccion == 'c';
	// Según su seleccion se ejecuta una función
	if (coincideA) {
		cout << altura() << endl << endl;
	}
	else if (coincideB) {
		cout << tiempo() << endl << endl;
	}
	else if (coincideC) {
		cout << gravedad() << endl << endl;
	}
	else {
		cout << "Debes colocar a, b, o c" << endl; // La persona no escribió lo solicitado
		return 0;
	}
}
// Funcion para calcular la altura a partir del tiempo
float altura() {
	cout << "Ingresa el valor del tiempo en segundos" <<endl ;
	cin >> t;
	h = 0.5 * g * pow(t,2);
	cout << "Este es el valor de la altura en metros: ";
	return h;
}

// Funcion para calcular el tiempo a partir de la altura 
float tiempo() {
	cout << "Ingresa el valor de la altura en metros" << endl;
	cin >> h;
	t = sqrt((2*h)/g);
	cout << "Este es el valor del tiempo en segundos: ";
	return t;
}

//Función para calcular la gravedad a partir del tiempo que tomó en caer y la altura
float gravedad() {
	cout << "Ingresa el valor de la altura en metros" << endl;
	cin >> h;
	cout << "Ingresa el valor del tiempo en segundos" << endl;
	cin >> t;
	g = (2*h) /pow(t,2);
	cout << "Este es el valor de la gravedad para que eso sea cierto: ";
	return g;
}
