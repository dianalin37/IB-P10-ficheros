
/** 
* Universidad de La Laguna
* Escuela SUperior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file progrmas_hecho.cc
* @author Diana Lin alu0101567402@ull.edu.es
* @date 
* @brief 
* @bug There are no known bugs 
* @enlace jutge
*
* Nombre fichero
* @param values outputs
* @retum intputs
*/

#include <iostream>
#include <string>
int main() {
	std::string palabra;
	std::getline (std::cin,palabra);	
	int contar = 0;
	int vocales = 0;
	int consonantes = 0;
	for (int j=0; j < palabra.length(); j++) {
		if ((palabra[j] != ' ' && palabra[j+1] !=' ')) {
			contar = contar + 1;
		}
	}
	for (int i=0; i < palabra.length(); i++) {
		if ((palabra[i] == 'a') or (palabra[i] == 'e') or (palabra[i] == 'i') or (palabra[i] == 'o') or (palabra[i] == 'u')) {
			vocales ++;
		}
		else {
			consonantes ++;
		}
	}
	std::cout<<"El numero de palabras en el texto es "<< contar <<" y de ellas: "<< std::endl;
	std::cout<<"- La palabra con mayor numero de vocales es: "<< vocales << std::endl;
	std::cout<<"- La palabra con mayor numero de consonantes es: "<< consonantes << std::endl;
return 0;
}

