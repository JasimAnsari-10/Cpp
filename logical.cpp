#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    // logical AND
    // Returns true only if both expression1 and expression2 are true. If either of the expressions is false, the result is false.
    cout<<"a && b : " <<(a > 0 && b > 0)<<endl;



    // Logical OR
    // Returns true if at least one of the expressions is true. If both are false, the result is false
    cout<<"a && b : " <<(a > 0 || b > 0)<<endl;


    // Logical NOT
    // Reverses the logical state of the expression. If the expression is true, it becomes false, and vice versa.
    cout<<"a ! b : " << !(a > 0 && b > 0);

    return 0;
}