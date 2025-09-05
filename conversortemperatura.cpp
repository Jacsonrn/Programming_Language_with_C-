#include <iostream>
#include <iomanip>
using namespace std;

int main(){
float fahrenheit, kelvin ;
cout << "Digite o valor da temperatura em Fahrenheit:"<<endl;
cin>>fahrenheit;
kelvin = (fahrenheit - 32)/1.8 + 273.15;

cout<<fixed<<setprecision(2);
cout << fahrenheit <<"F equivale a "<< kelvin <<"K"<<endl;

return 0;


}