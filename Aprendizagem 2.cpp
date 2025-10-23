#include <iostream>
using namespace std;
int main() {
int numero1 = 0, numero2 = 0;
int soma, subtracao, multiplicacao, resto;
double divisao;
cout << "Digite o primeiro numero: ";
cin >> numero1;
cout << "Digite o segundo numero: ";
cin >> numero2;
soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;

cout << "soma: " << soma << endl;
cout << "subtracao: " << subtracao << endl;
cout << "multiplicacao: " << multiplicacao << endl;

if (numero2 != 0) {
    divisao = static_cast<double>(numero1) / numero2;
    resto = numero1 % numero2;
    cout << "divisao: " << divisao << endl;
    cout << "resto: " << resto << endl;
} else {
    cout << "Nao eh possivel dividir por zero." << endl;
}
return 0;


}