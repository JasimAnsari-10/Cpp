#include<iostream>
using namespace std;
int main(){
    int n;
    int num=10;
    cout<<"enter the number: ";                                //1 2 3 
    cin>>n;                                                    //4 5 6
    for(int i=0;i<n;i++){                                      //7 8 9
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }    
    return 0;                                   
}