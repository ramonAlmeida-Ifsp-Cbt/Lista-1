#include <iostream>
#include <cmath>
#include <vector>

//IFSP - Campus Cubatão/SP
//Curso técnico de Automação, turma 271 / ano 2026
//Disciplina: CBTPROG (Programação)
//Prof. Marco Aurélio
//Aluno: (matrícula cb3042847) RAMON MATHEUS COSTA ALMEIDA

using namespace std;

int main(int argc, char** argv)
{

	//declarando variáveis
	double somatoriaPrecos = 0.0, valorPagamento = 0.0, troco = 0.0;
	double precosProdutos[]{0.0,0.0,0.0,0.0,0.0}; // criando um Vetor/ Matriz p/ armazenar os preços dos produtos

	/******-> Será utilizado 5 "espaços"/ índices desse vetor:
	
	• precosProdutos[0]
	• precosProdutos[1]
	• precosProdutos[2]
	• precosProdutos[3]
	• precosProdutos[4]
	*************************************************************/
	//############################################################/
	
	//Título - apresentação
	cout<<"##### CALCULO - TROCO (PELO PAGAMENTO DE PRODUTOS)######\n";	
	
	//pedindo ao usuário informar os preços
	for(int cont = 0; cont < 5;++cont)// looping
	{
		//Será solicitado ao usuário fornecer os preços dos produtos
		cout<<"Digite o valor do "<<(cont+1)<<"º produto -> ";
		
		//cada preço inserido será alocado nesse vetor/ matriz
		cin>>precosProdutos[cont];
	}
	
	cout<<"************************************** \n\n";
	/*################### Exibe os preços na lista ######################*/
	/*** 1º. pula duas linhas pra separar o texto anterior do próximo. ***/
	cout<<"\n"; 
	
	/*** 2º. Exibe os preços na lista através dessa estrutura de looping ***/
	for(int cont = 0; cont < 5;++cont)
	{
		cout<<"Preco do produto n. "<<(cont+1)<<": R$ "<<precosProdutos[cont]<<endl;
		somatoriaPrecos = somatoriaPrecos + precosProdutos[cont];
	}
	
	cout<<"Preco total: R$ "<<somatoriaPrecos<<endl;
	
	cout<<"\nQual o valor de pagamento? -> ";
	cin>>valorPagamento;
	
	//
	troco = valorPagamento - somatoriaPrecos;
	
	//Exibindo o resultado do troco
	cout<<"O troco sera de R$ "<<troco;	
}