#include <iostream>
//iostream permite o uso dos comandos cin e out, entre outros.
#include <locale>
//exibi��o de acentos
using namespace std;
// Regi�o declarativa que fornece um escopo para os identificadores (nomes dos tipos, fun��o, vari�veis, etc.
int main ()
//MAIN marca a abertura da fun��o principal do programa.
{
	setlocale(LC_ALL, "ptb");
	 
	 float dia, ano, hora;
	 cout <<"Quantos anos voc� j� viveu? ";
	 cin >> ano;
	 dia = ano*365;
	 cout <<"Voc� j� viveu " << dia << " dias.";
	 hora = dia*24;
	 cout <<"\nE possui " << hora << " horas de vida.";
}
	 

