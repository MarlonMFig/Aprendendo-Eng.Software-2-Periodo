#include <iostream>

#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "ptb");
	
	int dia, ano;
	cout <<"Quantos dias voc� j� viveu? ";
	cin >> dia;
	ano = dia/365;
	cout <<"Voc� j� viveu " << ano << " anos.";
	{
		if(ano>=18)
		cout <<"\nVoc� � maior de idade.";
	}

}
