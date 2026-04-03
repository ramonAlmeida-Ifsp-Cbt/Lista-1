#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float area, altura, base;
  cout<<"###### AREA DO TRIANGULO ##### \n\n";
  
	cout<<"Informe o valor da base? (pode ser decimal) -> ";
	cin>>base;
	
	cout<<"Informe o valor da altura? (pode ser decimal) -> ";
	cin>>altura;
	
	area = (base * altura) / 2;
	
	cout<<"Area do triangulo: "<<area<<endl;
	
	return 0;
}
