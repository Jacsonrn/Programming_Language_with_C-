#include <iostream>
using namespace std;

int main(){
int populacaoPaisA, populacaoPaisB, anos=0;
cout<<"Digite a populacao do Pais A:"<<endl;
cin>>populacaoPaisA;
cout<<"Digite a populacao do pais B:"<<endl;
cin>>populacaoPaisB;

do{
populacaoPaisA = populacaoPaisA * 1.02;
populacaoPaisB = populacaoPaisB * 1.1;

anos = anos + 1;

}while(populacaoPaisB <= populacaoPaisA);


cout<<"A populacao do pais B ultrapassou a do pais A, em exatamente: "<<anos<<" Anos"<<endl;



}