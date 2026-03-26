#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{

	/*DECLARAÇÃO DE VARIÁVEIS*/
	float numBase = 0.0, numExpoente = 0.0;


	//Número elevado a potência
	cout<<"#### (MATEMA]TICA) Potenciacao ####\n"<<endl<<"equacao -> b^n\n b: base\n n: expoente";
	
	cout<<"\nInforme o numero da base ? ";
	cin>>numBase;


	cout<<"\nInforme o numero do expoente ? ";
	cin>>numExpoente;
	
	//Exibindo o resultado
	cout<<numBase<<"^"<<numExpoente<<" = "<< std::pow(numBase,numExpoente);	
	
	return 0;
}