#include<iostream>
using namespace std;

int main(){

    int  FT=0;
    int ST=1;
    int next;

    for(int i=0; i<=5; i++){

    if(i==0){
        cout<<FT<<endl;
        continue;
    }
    if(i==1){
        cout<<ST<<endl;
        continue;
    }
    next=FT+ST;
    FT=ST;
    ST=next;

    cout<<next<<endl;
    }
}

