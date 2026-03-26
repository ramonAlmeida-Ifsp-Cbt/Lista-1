#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{

	/*dECLARAÇÃO DE VARIÁVEIS*/
	float mediaGeometrica = 0.0, primeiroNumero = 0.0, segundoNumero = 0.0;

	//TÍTULO DE APRESENTAÇÃO DA COMPILAÇÃO
	cout << "##### Media Geometrica#####\n ->> entre dois numeros\n\n";
	

	cout << "Informe o primeiro numero? -> ";
	cin >> primeiroNumero;

	cout << "Informe o segundo numero? -> ";
	cin >> segundoNumero;

	/*Exibindo o valor da área calculada*/
	
	mediaGeometrica = sqrt((primeiroNumero*segundoNumero));	
	cout << "\n Media Aritmetica -> "<<mediaGeometrica;
	return 0;
}