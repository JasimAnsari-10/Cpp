#include<iostream>
using namespace std;
int main(){
    int a,b,add,sub,mul,div,modulo;
    cout<<"Enter the firstNumber: ";
    cin>>a;
    cout<<"Enter the secondNumber: ";
    cin>>b;

    //addition
    add = a + b;
    cout<<"Sum of a&b: "<<add<<endl;

    //subtraction
    sub = a - b;
    cout<<"diff of a&b: "<<sub<<endl;

    //multiplication
    mul = a * b;
    cout<<"Mul of a&b: "<<mul<<endl;

    //division
    div = a / b;
    cout<<"div of a / b: "<<div<<endl;


    //mudolo
    modulo = a % b;
    cout<<"remainder of a&b: "<<modulo;
    return 0;
}