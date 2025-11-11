#include <iostream>
#include <cstring>
using namespace std;



int main(){
char palavra[10];
char palavra2[10];
cin.getline(palavra, 10);
strcpy(palavra2, palavra);
if(strcmp(palavra2, palavra )== 0){
cout << "São iguais"<<endl;
}
return 0;    
}