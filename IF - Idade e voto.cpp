#include <iostream>

#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "ptb");
	
	int num, quadrado;
	cout <<"Digite um n�mero qualquer: ";
	cin >> num;
	quadrado = num*num;
{
	if(quadrado>=25)
	cout <<"O quadrado de " << num << " � " << quadrado << ", portanto � maior que 25.";
}

}
