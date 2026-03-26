#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	/*dECLARAÇÃO DE VARIÁVEIS*/
	float diagonal = 0.0, area = 0.0;

	//TÍTULO DE APRESENTAÇÃO DO 
	cout << "##### AREA DO QUADRADO#####\n ->> pelo valor de dua DIAGONAL\n\n >>> área = (a^2) = (d^2)/2 <<<\n\n";
	
	cout << "Informe o valor da diagonal do quadrado (em metros)? -> ";
	cin >> diagonal;

	/*Exibindo o valor da área calculada*/	
	area = (diagonal * diagonal)/2.0;
	cout << "\n Area do quadrado -> "<<area<< "m2";
	return 0;
}