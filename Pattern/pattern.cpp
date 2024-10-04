#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";                                //A B C D
    cin>>n;                                                    //A B C D
    for(int i=0;i<=n;i++){                                     //A B C D
        char ch = 'A';                                         //A B C D
        for(int j=0;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}