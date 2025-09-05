#include <iostream>
#include <iomanip>
using namespace std;

int main(){
float fahrenheit, celsius;
cout << "Digite a temperatura em Fahrenheit:"<< endl;
cin >> fahrenheit;
celsius = (fahrenheit - 32)/1.8;

cout << fixed << setprecision(2);

cout<<fahrenheit<<"F equivale a "<<celsius<<"C"<<endl;

return 0;


}