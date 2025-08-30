#include <iostream>
#include <cctype>
using namespace std;


int main(){
int n = 0;
int i;
char caracter;
int quantidade = 0;
cout<<"Digite a quantidade de caracteres:"<<endl;
cin>>n;
for(i=0; i<n; i++){
cin>>caracter;
if(caracter == tolower(caracter)){
quantidade +=1;

}
cout<<"A quantidade de caracteres minisculas sao: "<<quantidade<<endl;
}


    return 0;
}