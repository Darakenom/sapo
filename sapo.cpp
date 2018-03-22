#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sapo.hpp"

int sapo::distotal;

sapo::sapo(char id) {
	ident = id;
	pulos=0;
	disperc=0;
}

char sapo::getident() {
	return ident;
}

int sapo::getdisperc() {
	return disperc;
}

int sapo::getpulos() {
	return pulos;
}

int sapo::getdistotal() {
	return distotal;
}

void sapo::corrida() {
	int ranm=distotal/5;
	srand(time(NULL));
	int random = rand()%ranm+1; 
	pulos++;
	disperc+=random;
}
void sapo::setdistotal(int n) {
	distotal=n;
}
