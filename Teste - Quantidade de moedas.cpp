#include <iostream>

#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	
	float qtde025, total025, qtde050, total050, qtde1, total1, totalMoedas;
	cout <<"Quantas moedas de R$0,25 você tem? ";
	cin >> qtde025;
	total025 = qtde025*0.25;
	cout <<"Você possui " << total025 << " reais de 25 centavos. ";
	cout <<"\nQuantas moedas de R$0,50 você tem? ";
	cin >> qtde050;
	total050 = qtde050*0.50;
	cout <<"Você possui " << total050 << " reais de 50 centavos. ";
	cout <<"\nQuantas moedas de R$1,00 você tem? ";
	cin >> qtde1;
	total1 = qtde1*1;
	cout <<"Você possui " << qtde1 << " reais de 1 real. ";
	
	totalMoedas = qtde025+qtde050+qtde1;
	cout <<"\nVocê conseguiu juntar um total de " << totalMoedas << " reais.";
	
}


