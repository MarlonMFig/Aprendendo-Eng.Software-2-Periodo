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
	 
	 int num, quadrado, cubo;
	 cout <<"Informe um n�mero: ";
	 cin >> num;
	 quadrado = num*num;
	 cout << num << "ao quadrado �: " << quadrado;
	 cout <<"Informe outro n�mero: ";
	 cin >> num;
	 cubo = num*num*num;
	 cout << num << "ao cubo �: " << cubo;
}

