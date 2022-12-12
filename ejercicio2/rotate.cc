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
#include <stdio.h>
#include <stdlib.h>
#include <string>
int main() {
        char cadena[250];
        std::cin.getline(cadena,250);
        for (int i = 0; i < 250; i++) {
                if (cadena[i] == 'a') {
                        cadena[i] = 'e';
                }
                else if (cadena[i] == 'e') {
                        cadena[i] = 'i';
                }
                else if (cadena[i] == 'i') {
                        cadena[i] = 'o';
                }
                else if (cadena[i] == 'o') {
                        cadena[i] = 'u';
                }
                else if (cadena[i] == 'u') {
                        cadena[i] = 'a';
                }
        }
        std::cout<<""<< cadena << std::endl;
        return 0;
}

