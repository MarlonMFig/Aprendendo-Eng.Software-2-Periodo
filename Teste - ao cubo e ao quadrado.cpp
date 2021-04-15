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
	 
	 int num, quadrado, cubo;
	 cout <<"Informe um número: ";
	 cin >> num;
	 quadrado = num*num;
	 cout << num << "ao quadrado é: " << quadrado;
	 cout <<"Informe outro número: ";
	 cin >> num;
	 cubo = num*num*num;
	 cout << num << "ao cubo é: " << cubo;
}

