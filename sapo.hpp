#ifndef SAPO_HPP
#define SAPO_HPP

class sapo {
	public:
		sapo(char id);
		char getident();
		int getdisperc();
		int getpulos();
		void corrida();
		static int distotal;
		static int getdistotal();
		static void setdistotal(int n);
	private:
		char ident;
		int disperc;
		int pulos;	
	
};

#endif 