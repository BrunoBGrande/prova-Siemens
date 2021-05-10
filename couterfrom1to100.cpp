#include <iostream>

using namespace std;



int num;
int main(){

    for (int num = 0; num < 101;num++) {
    cout << num<<" \n";
   
    if (num % 3 == 0){
      cout << " Foo\n" ;
    }
   if (num % 5 == 0){
     
       cout << " Baa\n";
    }
   
    
   
  
  }
  return 0;
}

