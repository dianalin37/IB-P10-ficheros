
/** 
* Universidad de La Laguna
* Escuela SUperior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file produce_files.cc
* @author Diana Lin alu0101567402@ull.edu.es
* @date 8/12/2022
* @brief Hacer un programa que cree ficheros txt con texto en su interior
* @bug There are no known bugs 
* @enlace jutge: there are not an enlace
*
* Name: produce_file
* @param values outputs
* @retum intputs
*/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

void escribir();

int main() {
	escribir();

	system("pause");
	return 0;
}

void escribir() {
	std::ofstream archivo;
	std::string frase;
	std::string titulo;
	std::cout<<"Escriba el titulo que llevara el archivo a crear (poner .txt): "<< std::endl;
	std::getline (std::cin, titulo);
	archivo.open(titulo.c_str(), std::ios::out); //crea un nuevo archivo, si existiera el archivo lo reemplazaria

	if (archivo.fail()) {
		std::cout<<"Error, no se ha podido abrir el archivo";
		exit(1);
	}
	
	std::cout<<"Escriba el texto que quiera poner en el archivo: "<< std::endl;
	std::getline (std::cin, frase);
	archivo<<frase;
	archivo.close();	
}

