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
	 
	 float ano, mes, hora, minuto;
	 cout <<"Quantos anos de namoro voc�s tem? ";
	 cin >> ano;
	 mes = ano*12;
	 cout <<"Voc�s tem " << mes << " meses de namoro.";
	 hora = mes*720;
	 minuto = mes*43200;
	 cout <<"\nDe acordo com a quantidade de meses de namoro, voc�s tem " << hora << " horas e " << minuto << " minutos de namoro.";
	 
	 

	 
}
