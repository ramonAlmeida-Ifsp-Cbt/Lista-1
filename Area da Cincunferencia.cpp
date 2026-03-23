#include <iostream>
#define n 3.1415926535897932384626433

using namespace std;

int main(int argc, char** argv)
{

	float raio = 0;
	cout << "##### AREA DO CIRCULO #####\n\n >>> PI*(r^2) <<<\n -> numero PI = 3.1415\n\n";
	
	cout << ">>> Atenção: Digite somente numeros (pode ser inteiros ou decimais <<<\n";
	cout << "Informe o valor do raio da circunferência (em metros)? -> ";
	cin >> raio;

	
	/*Exibindo o valor da área calculada*/	
	cout << "\n Area da circunferencia -> "<< ((raio * raio)*n) <<"m2";
	return 0;
}