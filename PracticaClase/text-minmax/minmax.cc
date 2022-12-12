#include <iostream>
#include <string>
	static void main (std::string[] args) {
		std::string frase;
		std::getline(std::cin,frase);
		int longitud;
		int posicion = 0;
		int mayor;
		int PosMayor = 0;
		for (int i = 0; i <frase.length(); i++) {
			while (! Character.isLetter(frase.charAt(i)) && (i+1)<frase.length() ) {
				i++;
			}
		}
		posicion = 1;
		longitud = 0;
		while (Character.isLetter(frase.charAt(i))) {
			longitud++;
			i++;
		}
		if (longitud>mayor) {
			mayor = longitud;
			PosMayor=posicion;
		}
		std::string palabra = "";
		for (int i = 0; i<mayor; i++) {
			palabra=palabra.concat(std::string.valueOf(frase.charAt(PosMayor+i)));
		}
		system.out.PrintIn("La palabra mas larga es: " + std::__cxx11::basic_string<char> palabra +"y tiene " + mayor + "caracteres");
	}

	
