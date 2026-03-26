#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	int base = 0, altura = 0;
	cout << "##### AREA DO RETANGULO #####\n\n >>> base x altura <<<\n\n";
	
	cout << "Informe o valor da base (em metros)? -> ";
	cin >> base;
	cout << "Informe o valor da altura (em metros)? ->";
	cin >> altura;

	/*Exibindo o valor da área calculada*/	
	cout << "\n Area do retangulo -> "<<base<<"m x "<<altura<<"m = "<< (base * altura)<< "m2";
	return 0;
}