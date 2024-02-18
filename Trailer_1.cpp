// Trailer_1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<chrono>
#include<thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main()
{	system("color 3");
	sleep_for(seconds(5));
	cout << "\n\n Proximamente";
	for (int i = 0; i < 4; i++) {
		sleep_for(milliseconds(800));
		cout << " .";
	};
	cout << " Di[S]ociety"; sleep_for(seconds(1)); cout << "Beta 1.0";
	sleep_for(seconds(2))
		cout << "Leyendas del Yggdrasil";
	
	sleep_for(seconds(4));
	system("cls");

	system("color 4");
	sleep_for(seconds(2));
	cout << " Estas listo para jugar?";
	sleep_for(seconds(3));
	cout << "\n [1]Si\t[2]No\n >";
	sleep_for(seconds(3));
	cout << "1";
	sleep_for(milliseconds(750));
	system("cls");
	sleep_for(seconds(5));
	system("color 2");
	cout <<  " ? ? / 3";
	sleep_for(milliseconds(750));
	system("cls");
	sleep_for(seconds(3));
};

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
