#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	/*DECLARAÇÃO DE VARIÁVEIS*/
	float tC = 0.0, tF = 0.0;


	//COnversão TC ? TF
	cout<<"Conversão de temperatura: de Celsius para Fahrenheit"<<endl;
	
	cout<<"\nInforme a temperatura em Celsius (C) ? ";
	cin>>tC;

	//Cálculo da conversão ? TC/5 = (TF – 32)/9
	tF = (9*(tC/5))+32;

	//Exibindo o resultado
	cout<<"\n#temperatura em Fahrenheit: "<<tF<<"(F)";	
	
	return 0;
}