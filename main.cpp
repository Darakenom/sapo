#include <iostream>
#include <unistd.h>
#include "sapo.hpp"

int main() {
	sapo a('A'), b('B'), c('C');
	int n;
	std::cout << "Digite a distãncia da corrida: ";
	std::cin >> n;
	a.setdistotal(n);
	std::cout << std::endl << std::endl;
	while(a.getdisperc()<n&&b.getdisperc()<n&&c.getdisperc()<n) { 
		a.corrida();
		sleep(1);
		b.corrida();
		sleep(1);
		c.corrida();
		sleep(1);

					//representação//
		for(int i=1-1; i<n; i++) std::cout << " ";
		std::cout << "##CHEGADA##" << std::endl;
		for(int i=1; i<a.getdisperc(); i++) std::cout << ".";
		std::cout << "Sapo A" << std::endl << std::endl;
		for(int i=1; i<b.getdisperc(); i++) std::cout << ".";
		std::cout << "Sapo B" << std::endl << std::endl;
		for(int i=1; i<c.getdisperc(); i++) std::cout << ".";
		std::cout << "Sapo C" << std::endl << std::endl;
		for(int i=1-1; i<n; i++) std::cout << " ";
		std::cout << "##CHEGADA##" << std::endl << std::endl << std::endl << std::endl;
					//reprsentação//
	}
	if (a.getdisperc()>b.getdisperc()&&a.getdisperc()>c.getdisperc()) {
		std::cout << "O vencedor foi: " << a.getident() << std::endl;
		std::cout << "Pulos dados: " << a.getpulos() << std::endl;
		std::cout << "Distancia percorrida: " << a.getdisperc() << std::endl;
	}
	else {
	if (a.getdisperc()<b.getdisperc()&&b.getdisperc()>c.getdisperc()) {
		std::cout << "O vencedor foi: " << b.getident() << std::endl;
		std::cout << "Pulos dados: " << b.getpulos() << std::endl;
		std::cout << "Distancia percorrida: " << b.getdisperc() << std::endl;
	}
	else {

	if (c.getdisperc()>b.getdisperc()&&a.getdisperc()<c.getdisperc()) {
		std::cout << "O vencedor foi: " << c.getident() << std::endl;
		std::cout << "Pulos dados: " << c.getpulos() << std::endl;
		std::cout << "Distancia percorrida: " << c.getdisperc() << std::endl;
	}	
	else std::cout << "EMPATE!"	<< std::endl;
	}
	}
	return 0;
}