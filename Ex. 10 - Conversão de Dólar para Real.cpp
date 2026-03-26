#include <iostream>
using namespace std;

#define precoDolar 5.25

int main(int argc, char** argv)
{

	/*DECLARAÇÃO DE VARIÁVEIS*/
	float montanteEmReal = 0.0, qtdeDolar = 0.0;

	//COnversão: Dólar (Americano) para Real (BR)
	cout<<"###### Conversao: Dolar (Americano) para Real (BR)######\n-> $1 US Dolar -> R$ 5,25 Reais "<<endl;
	
	cout<<"\nInforme o valor em Dolar: ";
	cin>>qtdeDolar;

	//Cálculo da conversão $US para (BR) R$
	montanteEmReal = precoDolar * qtdeDolar;

	//Exibindo o resultado
	cout<<"\n#Montante em Real(BR): R$"<<montanteEmReal<<endl;	
	
	return 0;
}