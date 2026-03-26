#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	float base = 0.0, altura = 0.0;
	cout << "##### AREA DO TRIANGULO #####\n\n >>> (base x altura)/2 <<<\n\n";
	
	cout << "Informe o valor da base (em metros)? -> ";
	cin >> base;
	cout << "Informe o valor da altura (em metros)? ->";
	cin >> altura;

	/*Exibindo o valor da área calculada*/	
	cout << "\n Area do Triangulo -> ("<<base<<"m x "<<altura<<"m)/2 = "<< ((base * altura)/2)<< "m2";
	return 0;
}