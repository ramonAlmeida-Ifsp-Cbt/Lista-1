#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{

	int menu =0;
	float base = 0, altura = 0, baseMenor = 0, baseMaior = 0;
	cout << "##### CALCULO DE AREA #####\n\n";
	
	cout << "[Menu]\n 1- Retangulo\n 2- Triangulo\n 3- Trapezio\n 0- SAIR \n\n Digite o numero da opcao desejada: ";
	cin>> menu;
	
	switch(menu)
	{
	case 0:
		cout << "\n O programa vai ser encerrado";
		break;
	case 1:
		
			cout << "##### AREA DO RETANGULO #####\n\n >>> base x altura <<<\n\n";
			
			cout << "Informe o valor da base (em metros)? -> ";
			cin >> base;
			cout << "Informe o valor da altura (em metros)? ->";
			cin >> altura;
		
			/*Exibindo o valor da área calculada*/	
			cout << "\n Area do retangulo -> "<<base<<"m x "<<altura<<"m = "<< (base * altura)<< "m2";
		break;
	case 2:

			cout << "##### AREA DO TRIANGULO #####\n\n >>> (base x altura)/2 <<<\n\n";
	
			cout << "Informe o valor da base (em metros)? -> ";
			cin >> base;
			cout << "Informe o valor da altura (em metros)? ->";
			cin >> altura;

	/*Exibindo o valor da área calculada*/	
	cout << "\n Area do Triangulo -> ("<<base<<"m x "<<altura<<"m)/2 = "<< ((base * altura)/2)<< "m2";
		break;
	case 3:

	cout << "##### AREA DO TRAPEZIO #####\n\n >>> ((base Maior + base menor) x altura)/2 <<<\n\n";
	
	cout << "Informe o valor da base menor (em metros)? -> ";
	cin >> baseMenor;
		cout << "Informe o valor da base maior (em metros)? -> ";
	cin >> baseMaior;
	cout << "Informe o valor da altura (em metros)? ->";
	cin >> altura;

	/*Exibindo o valor da área calculada*/	
	cout << "\n Area do Trapezio -> (("<<baseMenor<<"m + "<<baseMaior<<"m)x "<<altura<<"m)/2 = "<< (((baseMaior + baseMenor) * altura)/2)<< "m2";
		break;
	default:
		break;
	}

	return 0;
}