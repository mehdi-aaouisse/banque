#include<iostream>
class compte
{
private:
	int numcompte;
	char* nompropro;
	double solde;
public:
	bool retirerargent(double somme);
	void deposerargent(double somme);
	void consulter();
	bool transferer(double somme,compte c);

};
