#include <iostream>

#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "ptb");
	
	int num, quadrado;
	cout <<"Digite um número qualquer: ";
	cin >> num;
	quadrado = num*num;
{
	if(quadrado>=25)
	cout <<"O quadrado de " << num << " é " << quadrado << ", portanto é maior que 25.";
}

}
