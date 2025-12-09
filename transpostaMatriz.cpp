#include <iostream>
using namespace std;
const int MAX = 20;
void transporMatriz(char matrizQualquer[][MAX], char matrizTransposta[][MAX], int n, int m);

int main(){
int n, m, i, j; 
  cin >> n >> m;
  char matrizQualquer [MAX][MAX];
  char matrizTransposta[MAX][MAX];
  for(i = 0; i < n; i++){
  	for(j = 0; j < m; j++){
    cin >> matrizQualquer[i][j];
      
    
    }
    
  }
  transporMatriz(matrizQualquer, matrizTransposta, n, m);
  // Imprime a matriz transposta (que agora tem 'm' linhas e 'n' colunas)
  for(i = 0; i < m; i++){
  	for(j = 0; j < n; j++){
      cout << matrizTransposta[i][j] << " ";
    }
    cout << endl; // Adiciona uma quebra de linha ao final de cada linha da matriz
}
          
return 0;
}

void transporMatriz(char matrizQualquer[][MAX], char matrizTransposta[][MAX], int n, int m){
int i, j;
  
 for(i = 0; i < n; i++){
	 for(j = 0; j < m; j++){
        	matrizTransposta[j][i] = matrizQualquer[i][j];
       
   
 			
 }
 }



}