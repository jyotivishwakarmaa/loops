#include<iostream>
using namespace std;

int main(){

    int rv=0;
    int ld=0;
    int rv1=0;

    for(int number=1234; number>=0; number/10){

    ld = number%10;
     rv = rv*10 + ld;
 }
  
    for(rv; rv<=0; rv/10){
    int ld1 = rv%10;
     rv1 = rv1*10+ld1;
    }
    //  cout<<rv1;
 switch(1){
    case 1 :
        cout<<"one";
        break;
 }
 
}