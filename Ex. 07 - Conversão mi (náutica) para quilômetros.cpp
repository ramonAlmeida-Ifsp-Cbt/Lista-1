#include <iostream>
using namespace std;

#define fatorMilhasMetros 1.852

int main(int argc, char** argv)
{

	/*dECLARAÇÃO DE VARIÁVEIS*/
	float milhaMaritima = 0.0, kmCalculado = 0.0;

	//TÍTULO DE APRESENTAÇÃO DA COMPILAÇÃO
	cout << "##### Conversão - Milhas marítimas/ náuticas para quilômetros (km)#####\n -> 1\n\n";
	

	cout << "Informe um valor em milhas? -> ";
	cin >> milhaMaritima;
	
	kmCalculado = milhaMaritima * fatorMilhasMetros;//Convertendo mi (náuticas) em km	

	/*Exibindo o valor do cálculo*/	
	cout << "\nConversao:\n"<<milhaMaritima<<"mi(nautica) -> "<<kmCalculado<<" km";
	return 0;
}