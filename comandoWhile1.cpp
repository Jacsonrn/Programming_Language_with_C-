#include <iostream>
using namespace std;

int main(){
int numero;
cout<<"Digite um número para verificamos se é par ou impar:"<<endl;
cin>>numero;

while(numero>=0){
    if(numero%2 == 0){
        cout<<"Numero par"<<endl;
    }else{
        cout<<"Numero impar"<<endl;
    }
    cout<<"Digite um numero para verificamos se é par ou impar:"<<endl;
    cin>>numero;

}
cout<<"Game over, numero negativo"<<endl;


    return 0;
}