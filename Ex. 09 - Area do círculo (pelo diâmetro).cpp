#include <iostream>
#include <cmath>
#define num_PI 3.1415926535897932384626433

using namespace std;

int main(int argc, char** argv)
{

	float diametro = 0.0, area = 0.0;
	cout << "##### AREA DO CIRCULO #####\n\n >>> PI*((d/2)^2) <<<\n -> numero PI = 3.14159265\n\n";
	
	cout << ">>> Atencao: Digite somente numeros (pode ser inteiros ou decimais) <<<\n\n";
	cout << "Informe o valor do diametro da circunferencia (em centimetros)? -> ";
	cin >> diametro;

	area = (std::pow((diametro/2),2)*num_PI);
	
	/*Exibindo o valor da área calculada*/	
	cout <<"\nArea da circunferencia -> "<<area<<"cm2";
	return 0;
}