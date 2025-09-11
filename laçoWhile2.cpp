#include <iostream>
using namespace std;

int main(){
int numero, quociente, resto;


do{
cout<<"Digite um numero inteiro e positivo:"<<endl;
cin>>numero;
 }while(numero<0);

quociente = numero/10;
resto = numero%10;

cout<<quociente<<endl;
cout<<resto<<endl;

return 0;    
}