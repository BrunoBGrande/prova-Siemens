#include <iostream>  
using namespace std;  

int main() {  

  int numero,s1=0,s2=1,s3,i;   

 cout<<"insira o termo desejado da sequencia: ";  
 cin>>numero;//pedindo informação do usuário    
 cout<<s1<<" "<<s2<<" "; //"printando" 0 e 1    
 for(i=2;i<numero;++i){  // o loop começa apartir de 2 já que 0 e 1 são préviamente "printados"       
  s3=s1+s2;    
  cout<<s3<<" ";    
  s1=s2;    
  s2=s3;    
 }   
}  