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
	 
	 float ano, mes, hora, minuto;
	 cout <<"Quantos anos de namoro vocês tem? ";
	 cin >> ano;
	 mes = ano*12;
	 cout <<"Vocês tem " << mes << " meses de namoro.";
	 hora = mes*720;
	 minuto = mes*43200;
	 cout <<"\nDe acordo com a quantidade de meses de namoro, vocês tem " << hora << " horas e " << minuto << " minutos de namoro.";
	 
	 

	 
}
