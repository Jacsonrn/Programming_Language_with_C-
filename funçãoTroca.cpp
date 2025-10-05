#include <iostream>
using namespace std;

void troca(int& numero1, int& numero2, int& numero3);
int main(){
int numero1, numero2, numero3;
cout<<"Digite 3 numeros inteiros:"<<endl;
cin>>numero1>>numero2>>numero3;
troca(numero1, numero2, numero3);
cout<<" O primeiro menor:"<<numero1<<endl;
cout<<"O segundo menor:"<<numero2<<endl;
cout<<"O terceiro menor:"<<numero3<<endl;
cout<<"A media entre eles eh:"<<(numero1+numero2+numero3)/3<<endl;



   return 0; 
}

void troca(int& numero1, int& numero2, int& numero3){
if(numero1<numero2 && numero2<numero3){
numero1=numero1;
numero2=numero2;
numero3=numero3;
} if(numero2<numero1 && numero1<numero3){
numero1=numero2;
numero2=numero1;
numero3=numero3;
} if(numero3<numero1 && numero1<numero2){
numero1=numero3;
numero2=numero1;
numero3=numero2;
} 
}
