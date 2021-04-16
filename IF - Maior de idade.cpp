#include <iostream>

#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "ptb");
	
	int dia, ano;
	cout <<"Quantos dias você já viveu? ";
	cin >> dia;
	ano = dia/365;
	cout <<"Você já viveu " << ano << " anos.";
	{
		if(ano>=18)
		cout <<"\nVocê é maior de idade.";
	}

}
