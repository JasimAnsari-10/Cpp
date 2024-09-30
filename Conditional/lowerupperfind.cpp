#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter character ";
    cin>>ch;

    // if (ch >='a' && ch <='z'){
    //     cout<<"lowercase";
    // } else {
    //     cout <<"upercase";
    // }
    // return 0;


    if (ch >= 65 && ch <= 90 ){
        cout<<"uppercase";
    } else {
        cout<<"lowercase";
    }
    return 0;
}