#include<iostream>
using namespace std;

int main(){

    int number = 1234;
    int rv=0;
    int digit=0;

    while (number!=0)
    {
        rv=rv*10+number%10;
        number = number/10;
    }
    while(rv!=0){
        digit=rv%10;

        switch (digit)
        {
        case 1:
        cout<<"one";
            break;
            
             case 2:
        cout<<"two";
            break;
            
             case 3:
        cout<<"three";
            break;
            
             case 4:
        cout<<"four";
            break;
        }
        rv=rv/10;
    }
}