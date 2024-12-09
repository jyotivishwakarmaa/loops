#include<iostream>
using namespace std;

int main(){       //

    int num=153;
    int sum=0;
    int ans=num;
    int remainder;

    while(num!=0){
        remainder = num%10;
        sum+=remainder*remainder*remainder;
        num =  num/10;
    }
        if(sum==ans){
            cout<<"Armstrong number";
        }
        else{
            cout<<"not a armstrong number";
        }
        return 0;
}
