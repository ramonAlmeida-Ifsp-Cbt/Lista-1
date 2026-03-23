#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	float baseMenor = 0, altura = 0, baseMaior = 0;
	cout << "##### AREA DO TRAPEZIO #####\n\n >>> ((base Maior + base menor) x altura)/2 <<<\n\n";
	
	cout << "Informe o valor da base menor (em metros)? -> ";
	cin >> baseMenor;
		cout << "Informe o valor da base maior (em metros)? -> ";
	cin >> baseMaior;
	cout << "Informe o valor da altura (em metros)? ->";
	cin >> altura;

	/*Exibindo o valor da área calculada*/	
	cout << "\n Area do Trapezio -> (("<<baseMenor<<"m + "<<baseMaior<<"m)x "<<altura<<"m)/2 = "<< (((baseMaior + baseMenor) * altura)/2)<< "m2";
	return 0;
}
