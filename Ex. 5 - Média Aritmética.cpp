#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	/*dECLARAÇÃO DE VARIÁVEIS*/
	float mediaAritmetica = 0.0, primeiroNumero = 0.0, segundoNumero = 0.0, terceiroNumero = 0.0, quartoNumero = 0.0;

	//TÍTULO DE APRESENTAÇÃO DA COMPILAÇÃO
	cout << "##### Media Aritmetica#####\n ->> entre quarto numeros\n\n";
	

	cout << "Informe o primeiro numero? -> ";
	cin >> primeiroNumero;
	cout << "Informe o segundo numero? -> ";
	cin >> segundoNumero;
	cout << "Informe o terceiro numero? -> ";
	cin >> terceiroNumero;
	cout << "Informe o quarto numero? -> ";
	cin >> quartoNumero;

	/*Exibindo o valor da área calculada*/	
	cout << "\n Media Aritmetica -> "<< ((primeiroNumero + segundoNumero + terceiroNumero + quartoNumero)/4)<<endl;
	return 0;
}