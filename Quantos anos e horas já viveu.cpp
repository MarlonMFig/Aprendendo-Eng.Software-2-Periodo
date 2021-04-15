#include <iostream>
//iostream permite o uso dos comandos cin e out, entre outros.
#include <locale>
//exibição de acentos
using namespace std;
// Região declarativa que fornece um escopo para os identificadores (nomes dos tipos, função, variáveis, etc.
int main ()
//MAIN marca a abertura da função principal do programa.
{
	setlocale(LC_ALL, "ptb");
	 
	 float dia, ano, hora;
	 cout <<"Quantos anos você já viveu? ";
	 cin >> ano;
	 dia = ano*365;
	 cout <<"Você já viveu " << dia << " dias.";
	 hora = dia*24;
	 cout <<"\nE possui " << hora << " horas de vida.";
}
	 

