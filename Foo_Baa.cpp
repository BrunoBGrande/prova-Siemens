#include <iostream>
using namespace std;
int num;
int main(){

    for (int num = 0; num < 101;num++) {//cria uma sequência de numeros de 0 a 100
    cout << num<<" \n";
  
    if (num % 3 == 0){ //verifica se é multipo de 3
      cout << " Foo\n" ;
    }
    
   if (num % 5 == 0){ //verifica se é multipo de 5
       cout << " Baa\n";
    }
  }
  return 0;
}

