#include <iostream>
using namespace std;
int main() {
 int numero1 = 0;
 cout << "Digite um numero inteiro:" << endl;
 cin >> numero1;

 if (numero1 == 13) {
    cout << numero1 << endl;
 } else {
    cout << numero1 - 1 << endl;
 }
 return 0;
}