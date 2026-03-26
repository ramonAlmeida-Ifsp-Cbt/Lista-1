#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	/*dECLARAÇÃO DE VARIÁVEIS*/
	float aresta = 0;

	//TÍTULO DE APRESENTAÇÃO DO 
	cout << "##### AREA DO QUADRADO #####\n\n >>> area = (aresta)^2 <<<\n\n";
	
	cout << "Informe o valor da aresta do quadrado (em metros)? -> ";
	cin >> aresta;

	/*Exibindo o valor da área calculada*/	
	cout << "\n Area do quadrado -> ("<<aresta<<"m) ^ 2 = "<<(aresta* aresta)<< "m2";
	return 0;
}